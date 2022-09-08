using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using ZXing;

namespace AR-Application
{

    /// <summary>
    /// Class for handling all actions concerning the qrcode scanning process.
    /// </summary>

    public class QrCodeRecenter : MonoBehaviour
    {
        /// <summary>
        /// /// Unity ARSession with the environment.
        /// </summary>
        [SerializeField]
        public ARSession session;

        /// <summary>
        /// /// Origin of the AR Session.
        /// </summary>
        [SerializeField]
        public ARSessionOrigin sessionOrigin;

        /// <summary>
        /// /// Unity cameramanager for reading the frames with the qr code.
        /// </summary>
        [SerializeField]
        public ARCameraManager cameraManager;

        /// <summary>
        /// Panel to show the player the qrcodescanner is active.
        /// </summary>
        [SerializeField]
        public GameObject qrCodeScanningPanel;

        /// <summary>
        /// SaveImage variable.
        /// </summary>
        public Texture2D cameraImageTexture;

        /// <summary>
        /// Create a barcode reader instance.
        /// </summary>
        public IBarcodeReader reader = new BarcodeReader();

        /// <summary>
        /// Variable the save if panel is enabled or not
        /// </summary>
        public bool scanningEnabled = false;

        /// <summary>
        /// Reference to the gameobject for getting the position data etc.
        /// </summary>
        [SerializeField]
        public TargetFacade startitem;

        /// <summary>
        /// When GameObject with script is active send the frameReceived by the cameramanager.
        /// </summary>
        public void OnEnable()
        {
            cameraManager.frameReceived += OnCameraFrameReceived;
        }

        /// <summary>
        /// When GameObject with script is not active do not send the frameReceived by the cameramanager.
        /// </summary>
        public void OnDisable()
        {
            cameraManager.frameReceived -= OnCameraFrameReceived;
        }

        /// <summary>
        /// Method for handling all qr scanner related task. Method mainly from the following link with small changes.
        /// https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@1.0/manual/cpu-camera-image.html
        /// </summary>
        /// <param name="eventArgs">Event received by camera.</param>
        public void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
        {

            if (!scanningEnabled)
            {
                return;
            }

            if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
            {
                return;
            }

            var conversionParams = new XRCpuImage.ConversionParams
            {
                // Get the entire image.
                inputRect = new RectInt(0, 0, image.width, image.height),

                // Downsample by 2.
                outputDimensions = new Vector2Int(image.width / 2, image.height / 2),

                // Choose RGBA format.
                outputFormat = TextureFormat.RGBA32,

                // Flip across the vertical axis (mirror image).
                transformation = XRCpuImage.Transformation.MirrorY
            };

            // See how many bytes you need to store the final image.
            int size = image.GetConvertedDataSize(conversionParams);

            // Allocate a buffer to store the image.
            var buffer = new NativeArray<byte>(size, Allocator.Temp);

            // Extract the image data
            image.Convert(conversionParams, buffer);

            // The image was converted to RGBA32 format and written into the provided buffer
            // so you can dispose of the XRCpuImage. You must do this or it will leak resources.
            image.Dispose();

            // At this point, you can process the image, pass it to a computer vision algorithm, etc.
            // In this example, you apply it to a texture to visualize it.

            // You've got the data; let's put it into a texture so you can visualize it.
            cameraImageTexture = new Texture2D(
                conversionParams.outputDimensions.x,
                conversionParams.outputDimensions.y,
                conversionParams.outputFormat,
                false);

            cameraImageTexture.LoadRawTextureData(buffer);
            cameraImageTexture.Apply();

            // Done with your temporary data, so you can dispose it.
            buffer.Dispose();

            // Detect and decode the barcode inside the bitmap
            var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);

            // Do something with the result
            if (result != null)
            {
                SetQrCodeRecenterTarget(result.Text);
                ToggleScanning();
            }
        }

        /// <summary>
        /// Method for button to active and deactive scanning for the qr code otherwise application would crash.
        /// </summary>
        /// <param name="targetText"> string variable delivered by the qr scanner method to check if the scanned text matches the start passphrase.</param>

        public void SetQrCodeRecenterTarget(string targetText)
        {

            if (startitem.Name.Equals(targetText))
            {
                // Reset position and rotation of ARSession
                session.Reset();

                // Add offset for recentering
                sessionOrigin.transform.position = startitem.transform.position;
                sessionOrigin.transform.rotation = startitem.transform.rotation;
            }
        }

        /// <summary>
        /// Method for button to active and deactive scanning for the qr code otherwise application would crash.
        /// </summary>
        public void ToggleScanning()
        {
            scanningEnabled = !scanningEnabled;
            qrCodeScanningPanel.SetActive(scanningEnabled);
        }
    }
}
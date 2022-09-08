using TMPro;
using UnityEngine;

namespace AR-Application
{
    /// <summary>
    /// Class for handling the text field in the line debug options panel.
    /// </summary>

    public class SetUiText : MonoBehaviour
    {
        [SerializeField]
        private TMP_Text textField; /// Textfield to show the text
        [SerializeField]
        private string fixedText; /// Text which is fixed and does not change as value provided changes

        /// <summary>
        /// Facade with all different information of the target.
        /// For better identification a name gets added.
        /// </summary>

        public void OnSliderValueChanged(float numericValue)
        {

            textField.text = $"{fixedText}: {numericValue}";

        }

    }
}

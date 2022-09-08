using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace AR-Application
{

    /// <summary>
    /// Class to make sure the line, shown when targets gets selected to navigate to, is pulsing.
    /// </summary>

    public class PulsingLine : MonoBehaviour
    {
        /// <summary>
        /// Object were changes should be applied.
        /// </summary>
        public LineRenderer r;

        /// <summary>
        /// First color to be shown.
        /// </summary>
        public Color32 startColor = new Color32(196, 0, 15, 60);

        /// <summary>
        /// Second color to be shown.
        /// </summary>
        public Color32 endColor = new Color32(250, 0, 15, 60);

        /// <summary>
        /// Time it took for the last color change.
        /// </summary>
        public float lastColorChangeTime;

        /// <summary>
        /// /// Material to transform the color.
        /// </summary>
        public Material material;

        /// <summary>
        /// Current position of the player.
        /// </summary>
        public Vector3 startPos;

        /// <summary>
        /// /// Current position of the selected target.
        /// </summary>
        public Vector3 endPos;

        /// <summary>
        /// /// Array of points frim the line.
        /// </summary>
        public Vector3[] myPointsInLine;

        /// <summary> 
        /// When the Game is started this method gets executed. 
        /// It gets the linerenderer and his material.
        /// </summary>

        public void Start()
        {

            r = gameObject.GetComponent<LineRenderer>();
            material = GetComponent<Renderer>().material;

        }

        /// <summary> 
        /// Method used to continously update the frequency the line changes is color so it can signal how far the target is.
        /// Gets to position of the player and the target and calculates the distance.
        /// The higher the distance the lower the frequency the line changes its color.
        /// </summary>


        public void Update()
        {
            myPointsInLine = new Vector3[r.positionCount];
            r.GetPositions(myPointsInLine);

            if (myPointsInLine.Length > 2)
            {

                startPos = myPointsInLine[0];
                endPos = myPointsInLine[myPointsInLine.Length - 1];

                double x = Math.Pow(endPos.x - startPos.x, 2);
                double y = Math.Pow(endPos.z - startPos.z, 2);

                double distance = x + y;

                if ((distance > 0) && (distance <= 16))
                {

                    changecolor(0.0f);

                }
                else if ((distance > 16) && (distance <= 32))
                {

                    changecolor(1.0f);

                }
                else if ((distance > 32) && (distance <= 48))
                {

                    changecolor(2.0f);

                }
                else if ((distance > 48) && (distance <= 64))
                {

                    changecolor(4.0f);

                }
                else if ((distance > 64) && (distance <= 80))
                {

                    changecolor(6.0f);
                }
            }
        }

        /// <summary>
        /// This method used the lerp function to change between two color in different speeds so it shows the player how far he/she is away from the target.
        /// </summary>
        /// <param name="Fadeduration"> Gets the Fadeduration to know how fast the line should change its color</param>

        public void changecolor(float Fadeduration)
        {

            var ratio = (Time.time - lastColorChangeTime) / Fadeduration;
            ratio = Mathf.Clamp01(ratio);
            material.color = Color.Lerp(startColor, endColor, ratio);

            if (ratio == 1f)
            {
                lastColorChangeTime = Time.time;

                // Switch colors
                var temp = startColor;
                startColor = endColor;
                endColor = temp;
            }

        }
    }
}
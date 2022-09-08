using TMPro;
using UnityEngine;
using System;

/// <summary>
/// Class for handling the text field in the line debug options panel.
/// </summary>

public class SetUiText : MonoBehaviour
{
    [SerializeField]
    private TMP_Text textField; /// Textfield to show the text

    /// <summary>
    /// Facade with all different information of the target.
    /// For better identification a name gets added.
    /// </summary>

    public void OnSliderValueChanged(float numericValue){

        double value = Math.Round(numericValue, 2);

        textField.text = $"Line Height: \n {value} m";

    }
}
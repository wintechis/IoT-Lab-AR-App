using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Class for handling if the password was allready correctly entered, if yes then directly show the adminpanel when clicking at menu.
/// </summary>

public class CheckAdminPanel : MonoBehaviour
{
    
    /// <summary>
    /// Link to the PasswordHandling object to work with it.
    /// </summary>
    public GameObject PasswordHandling;

    /// <summary>
    /// Link to the PasswordItems object to work with it.
    /// </summary>
    public GameObject PasswordItems;

    /// <summary>
    /// Link to the AdminOptionsPanel object to work with it.
    /// </summary>
    public GameObject AdminOptionsPanel;

    /// <summary>
    /// Link to the Menu object to work with it.
    /// </summary>
    public GameObject Menu;

    /// <summary>
    /// Method to check if the passwordvariable from other script is one. When it is one, do not show the screen for the password input again.
    /// </summary>
    public void allreadycommitedpassword() {

        if(PasswordHandling.GetComponent<PasswordController>().passwordconfirmed == 1){

            AdminOptionsPanel.SetActive(true);
            PasswordItems.SetActive(false);
            Menu.SetActive(false);

        }else{

            PasswordItems.SetActive(true);
            Menu.SetActive(false);

        }
    }
}

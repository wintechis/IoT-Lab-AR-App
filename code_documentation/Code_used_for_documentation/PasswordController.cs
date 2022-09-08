using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using TMPro;

namespace AR-Application
{
    /// <summary>
    /// Class for handling the passwort protection for the admin panel.
    /// </summary>

    public class PasswordController : MonoBehaviour
    {
        /// <summary>
        /// Field were the password gets entered.
        /// </summary>
        [SerializeField]
        public InputField PasswordInput;

        /// <summary>
        /// Adminoptionpanel to be sown when password correct.
        /// </summary>
        public GameObject adminoptionspanel;

        /// <summary>
        /// Button to delete a target.
        /// </summary>
        public GameObject delbutton;

        /// <summary>
        /// Variable to store the information if the password was already entered correctly.
        /// </summary>
        [SerializeField]
        public int passwordconfirmed = 0;

        /// <summary>
        /// Method to declase the password and handle the password protection.
        /// If password correct show delete target button and the adminpanel.
        /// If password is not correct display "wrong passwort" in the input field and do nothing.
        /// </summary>

        public void CheckPasswordCondition()
        {

            string ReceivedString = PasswordInput.text;
            string Password = "12345";

            if (string.Equals(ReceivedString, Password))
            {


                adminoptionspanel.SetActive(true);
                delbutton.SetActive(true);

                GameObject.Find("PasswordItems").SetActive(false);
                passwordconfirmed = 1;

            }
            else
            {

                PasswordInput.text = "Wrong Password";

            }

        }
    }
}

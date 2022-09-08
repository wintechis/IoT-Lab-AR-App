using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System;
using SimpleJSON;
using System.Threading.Tasks;
using System.Collections;
using UnityEngine.Networking;

namespace AR-Application
{

    /// <summary>
    /// Class for handling all actions concerning the targets in the environment.
    /// </summary>

    public class TargetHandler : MonoBehaviour
    {

        /// <summary>
        /// Instance were the class is initialized.
        /// </summary>
        [SerializeField]
        public NavigationController navigationController;

        /// <summary>
        /// Dropdown menu filled with targest on first menu page.
        /// </summary>
        [SerializeField]
        public TMP_Dropdown targetDataDropdown1;

        /// <summary>
        /// Dropdown menu filled with targets on last menu page.
        /// </summary>
        [SerializeField]
        public TMP_Dropdown targetDataDropdown2;

        /// <summary>
        /// Dropdown menu filled with targets on adminpanel
        /// </summary>
        [SerializeField]
        public TMP_Dropdown targetDataDropdown3;

        /// <summary>
        /// Slider to change z location of selected target.
        /// </summary>
        [SerializeField]
        public Slider navigationZOffset;

        /// <summary>
        /// Slider to change x location of selected target.
        /// </summary>
        [SerializeField]
        public Slider navigationXOffset;

        /// <summary>
        /// Variable to store the current selected target.
        /// </summary>
        public string item;

        /// <summary>
        /// Variable to store the selected value of a dropdown menu.
        /// </summary>
        public int value;

        /// <summary>
        /// Prefab to create targets from.
        /// </summary>
        [SerializeField]
        public GameObject targetObjectPrefab;

        /// <summary>
        /// Location were to store targets in environment.
        /// </summary>
        [SerializeField]
        public Transform[] targetObjectsParentTransforms;

        /// <summary>
        /// List to store current targets.
        /// </summary>
        public List<TargetFacade> currentTargetItems = new List<TargetFacade>();

        /// <summary>
        /// Array to store current targets.
        /// </summary>
        public Target[] targets;

        /// <summary>
        /// List to store current targets.
        /// </summary>
        public List<Target> targetlist;

        /// <summary>
        /// Show if a new item gets selected by user to show location by changing color.
        /// </summary>
        public int selected = 0;

        /// <summary>
        /// Save previous item to check if a new item was selected.
        /// </summary>
        public string saveprevious;

        /// <summary>
        /// Color of the red used by the university.
        /// </summary>
        public Color32 unired = new Color32(196, 0, 15, 60);

        /// <summary>
        /// Color of the blue used by the university.
        /// </summary>
        public Color32 uniblue = new Color32(1, 0, 47, 107);

        /// <summary>
        /// Input field to give the new target added a name.
        /// </summary>
        [SerializeField]
        public InputField NewTargetNameInput;

        /// <summary>
        /// String for the JSON ulpoaded to server when save gets clicked.
        /// </summary>
        public string outputstring = "";

        /// <summary>
        /// Address for loading the data to create target gameobjects.
        /// </summary>
        public const string LoadURL = "https://ar-app-rest-api.herokuapp.com/positions";

        /// <summary>
        /// Address for uploading the data when targets get updated in position etc..
        /// </summary>
        public const string SaveURL = "https://ar-app-rest-api.herokuapp.com/updatepositions";

        /// <summary> 
        /// When the Game is started this method gets executed. 
        /// It generates all targets, fills the dropdown menu with the targets and sets the paths were the json is stored.
        /// </summary>

        public void Start()
        {

            GenerateTargetItems();

        }

        /// <summary> 
        /// Method used to always check if the app is started. 
        /// Checks if item is selected and always updates the position when slider gets moved.
        /// Changes color of the selected item from red to blue and backwards.
        /// </summary>

        public void Update()
        {
            if (item != null)
            {

                GameObject.Find(item).transform.position = new Vector3(navigationXOffset.value, GameObject.Find(item).transform.position.y, navigationZOffset.value);

            }

            if (item != null && selected == 0)
            {

                GameObject.Find(item).GetComponent<Renderer>().material.color = uniblue;
                selected = 1;
                saveprevious = item;

            }

            if (selected == 1 && saveprevious != item)
            {

                GameObject.Find(saveprevious).GetComponent<Renderer>().material.color = unired;
                selected = 0;
            }
        }

        /// <summary>
        /// Save JSON to server and check if it worked.
        /// </summary>

        public IEnumerator sendjson()
        {

            UnityWebRequest www = UnityWebRequest.Put(SaveURL, outputstring);
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("Form upload complete!");
            }
        }

        /// <summary> 
        /// If the user goes back to the menu all targets get unselected and their original color gets restored.
        /// </summary>

        public void makeallunselected()
        {

            item = null;
            selected = 0;

            GameObject[] taggedObjects = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject o in taggedObjects)
            {
                o.GetComponent<Renderer>().material.color = unired;
            }
        }

        /// <summary>
        /// Deletes all changes made to the environment and loads the data from json again, in generel it reloads the last game settings.
        /// </summary>

        public void restartpositions()
        {

            targetDataDropdown1.value = 0;
            targetDataDropdown2.value = 0;
            targetDataDropdown3.value = 0;

            makeallunselected();

            GameObject[] taggedObjects = GameObject.FindGameObjectsWithTag("Target");
            foreach (GameObject o in taggedObjects)
            {
                GameObject.Destroy(o);
            }

            Array.Clear(targets, 0, targets.Length);

            currentTargetItems.Clear();

            GenerateTargetItems();

        }

        /// <summary>
        /// Add a new target the the environment and update all dropdown menus.
        /// </summary>

        public void addTarget()
        {

            string name = NewTargetNameInput.text;
            NewTargetNameInput.text = "";

            Target newtarget = new Target();

            newtarget.Name = name;
            newtarget.Position.x = 8;
            newtarget.Position.y = 0.1f;
            newtarget.Position.z = 2;

            List<Target> targetslist = targets.ToList();

            targetslist.Add(newtarget);

            targets = targetslist.ToArray();

            foreach (Target target in targets)
            {

                Debug.Log(target.Name);

            }

            currentTargetItems.Add(CreateTargetFacade(newtarget));

            FillDropdownWithTargetItems();

        }

        /// <summary>
        /// Remove a selected target from the environment.
        /// </summary>

        public void removeTarget()
        {

            List<Target> removelist = targets.ToList();

            foreach (Target t in targets)
            {

                if (t.Name == item)
                {

                    Target saveitemtoremove = t;
                    removelist.Remove(saveitemtoremove);

                    foreach (TargetFacade tf in currentTargetItems.ToList())
                    {

                        if (tf.Name == item)
                        {

                            currentTargetItems.Remove(tf);

                            GameObject remove = GameObject.Find(item);

                            Destroy(remove.gameObject);

                            FillDropdownWithTargetItems();

                            targets = removelist.ToArray();

                            targetDataDropdown1.value = 0;
                            targetDataDropdown2.value = 0;
                            targetDataDropdown3.value = 0;

                            makeallunselected();

                        }
                    }
                }
            }
        }

        /// <summary>
        /// Save all targets to the json to save the changes for the next users.
        /// Save the data to a string for uploading to the server.
        /// </summary>

        public void SaveData()
        {

            Target[] ta = targets;

            for (int i = 0; i < ta.Length; i++)
            {

                ta[i].Position.x = GameObject.Find(ta[i].Name).transform.position.x;
                //print(ta[i].Position.x);

                ta[i].Position.z = GameObject.Find(ta[i].Name).transform.position.z;
                //print(ta[i].Position.z);
            }

            outputstring = "{";
            outputstring += '"';
            outputstring += "TargetList";
            outputstring += '"';
            outputstring += ':';
            outputstring += '[';

            foreach (Target target in ta)
            {

                outputstring = outputstring + JsonUtility.ToJson(target) + ",";

            }

            outputstring = outputstring.Remove(outputstring.Length - 1);
            outputstring += "]}";

            print("Saved OutputString: " + outputstring);

            StartCoroutine(sendjson());

        }

        /// <summary>
        /// Notize when a target gets selected and set item like the value selected.
        /// Set the sliders to change the coordinates of the target selected.
        /// </summary>
        /// <param name="selectedValue"> The value selected by the dropdown on third page. </param>

        public void SetSelectedChange2(int selectedValue)
        {

            item = targetDataDropdown2.options[targetDataDropdown2.value].text;
            value = selectedValue;

            navigationXOffset.value = GameObject.Find(item).transform.position.x;
            navigationZOffset.value = GameObject.Find(item).transform.position.z;

        }

        /// <summary>
        /// Notize when a target gets selected and set item like the value selected.
        /// Set the sliders to change the coordinates of the target selected.
        /// </summary>
        /// <param name="selectedValue"> The value selected by the dropdown on third page. </param>

        public void SetSelectedChange3(int selectedValue)
        {

            item = targetDataDropdown3.options[targetDataDropdown3.value].text;
            value = selectedValue;

            navigationXOffset.value = GameObject.Find(item).transform.position.x;
            navigationZOffset.value = GameObject.Find(item).transform.position.z;
        }

        /// <summary>
        /// Method for getting the JSON Data from our WebServer.
        /// </summary>
        /// <returns> Returns the JSON as a Task string. </returns>

        public async Task<string> asyncGetRequest()
        {

            UnityWebRequest request = new UnityWebRequest(LoadURL);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SendWebRequest();

            while (!request.isDone)
            {

                await Task.Yield();
            }

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(request.error);
                return request.error;
            }
            else
            {
                return request.downloadHandler.text;
            }
        }

        /// <summary>
        /// Load the targets from the json to an array of targets and create targets in environment.
        /// Set the sliders to change the coordinates of the target selected.
        /// Update the Dropdownmenus with the names of the targets.
        /// </summary>

        public async void GenerateTargetItems()
        {

            var response = await asyncGetRequest();
            targets = JsonUtility.FromJson<TargetWrapper>(response.ToString()).TargetList;

            foreach (Target target in targets)
            {

                currentTargetItems.Add(CreateTargetFacade(target));

            }
            FillDropdownWithTargetItems();

            makeallunselected();
        }

        /// <summary>
        /// Creates the target in the environment with all given data from the parameter.
        /// </summary>
        /// <param name="target"> Gets a target which gets created during method. </param>
        /// <returns> TargetFacade of each creates target.</returns>

        public TargetFacade CreateTargetFacade(Target target)
        {
            GameObject targetObject = Instantiate(targetObjectPrefab, targetObjectsParentTransforms[0], false);
            targetObject.SetActive(true);
            targetObject.name = $"{target.Name}";
            targetObject.transform.localPosition = target.Position;

            TargetFacade targetData = targetObject.GetComponent<TargetFacade>();
            targetData.Name = target.Name;

            return targetData;
        }

        /// <summary>
        /// Fills both dropdowns with the names of the provided targets.
        /// </summary>

        public void FillDropdownWithTargetItems()
        {
            List<TMP_Dropdown.OptionData> targetFacadeOptionData =
                currentTargetItems.Select(x => new TMP_Dropdown.OptionData
                {
                    text = $"{x.Name}"
                }).ToList();

            foreach (var m in currentTargetItems)
            {

                Debug.Log(m.Name);

            }

            targetDataDropdown1.ClearOptions();
            targetDataDropdown1.AddOptions(targetFacadeOptionData);
            targetDataDropdown2.ClearOptions();
            targetDataDropdown2.AddOptions(targetFacadeOptionData);
            targetDataDropdown3.ClearOptions();
            targetDataDropdown3.AddOptions(targetFacadeOptionData);
        }

        /// <summary>
        /// Get the position data of currently selected target.
        /// </summary>
        /// <param name="selectedValue"> Value of dropdown to select a target. </param>
        /// <returns> The Vector of the position data from the selectedValue provided.</returns>

        public Vector3 GetCurrentlySelectedTarget(int selectedValue)
        {
            if (selectedValue >= currentTargetItems.Count)
            {
                return Vector3.zero;
            }

            return currentTargetItems[selectedValue].transform.position;
        }

        /// <summary>
        /// Get the position of the target selected.
        /// </summary>
        /// <param name="selectedValue"> selectedValue by the dropdownmenu. </param>

        public void SetSelectedTargetPositionWithDropdown(int selectedValue)
        {
            navigationController.TargetPosition = GetCurrentlySelectedTarget(selectedValue);
        }
    }
}
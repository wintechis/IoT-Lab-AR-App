

<h2 align="center">IoT-Lab-AR-App</h2>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Contents</summary>
  <ol>
    <ul>
      <li><a href="#about-the-project">About The Project</a></li>
      <li><a href="#built-with">Built with</a></li>
      <li><a href="#getting-started">Getting Started</a></li>
      <li><a href="#using-the-application">Using the Application</a></li>
      <li><a href="#video-demonstration-and-usage">Video demonstration and Usage</a></li>
      <li><a href="#difficulties-during-development">Difficulties during development</a></li>
      <li><a href="#further-development-ideas">Further development ideas</a></li>
      <li><a href="#license">License</a></li>
      <li><a href="#contact">Contact</a></li>
    </ul>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

This Unity application was developed to help students in the IT Lab premises at the WISO of the Friedrich-Alexander-University Erlangen-Nuremberg.

The app offers students the possibility to get a live navigation to different targets in the premises through AR. 
Through an admin panel, new destinations can be added, removed or changed which are then synchronized with a server to always ensure the most up-to-date status between all users. Through a QR scanner integrated into the app, the player can be reset to the starting point for ease of use. 

<!-- BUILT WITH -->
## Built With

This section should list any major frameworks/libraries used to bootstrap your project. Leave any add-ons/plugins for the acknowledgements section. Here are a few examples.

* Unity Version 2021.2.3f1 AR Foundation
* Docker
* NodeJS

<!-- GETTING STARTED -->
## Getting Started

### Prerequisites

Make sure you have Node.js and the Node Package Manager (npm) installed. 
* check if node is installed
```sh
  node --version
  ```
if node is not installed you can download it at https://nodejs.org/en/


* to install the newest version of npm, simply run the following command
  ```sh
  npm install npm@latest -g
  ```

* install the npm packages
  ```sh
  cd AR-App-REST-API
  npm install
  ```

* Install Unity Hub: https://unity3d.com/de/get-unity/download
* Get the Unity Version 2021.2.3f1
* Download all files listed in the Unity_project_final folder
* Start a new project and copy all files in the folder to your new project
  
For setting up a different AdminPanelPassword please go to the "PasswordController.cs" file and change the "Password" variable. 

<!-- USING THE APPLICATION -->
## Using the Application

For using the Application a Android Device is required. Copy all files inside the Android_Application Folder on a USB Device and install it on your smart phone. Please activate your internet connection otherwise the application can not load the target data from the server to create the targets in the environment. Please enable the usage of the camera otherwise a live AR navigation is not possible.

To start the service that manages the state of the targetdata.json file simply go in the /AR-App-REST-API folder and run start it:
```sh
cd AR-App-REST-API 
npm run start
  ```

The service will run on http://localhost:5000/


<!-- USAGE EXAMPLES -->
## Video demonstration and Usage

https://www.dropbox.com/s/nwlbh8urvkmz9r7/Seminar_AR_Demo_Video.mp4?dl=0

Link Youtube Video here when filmed

<!-- DIFFICULTIES -->
## Difficulties during development

Direct publishing with Webgl through the solution provided by Unity unfortunately did not work, since once the application was deployed through a server, the calling device's camera could not be accessed.

We found several Unity extensions that promised to provide a solution to our problems and we were also in contact with experts on the Unity forum.

1. <a href="https://assetstore.unity.com/packages/tools/integration/opencv-for-unity-21088">OpenCV for Unity</a>
2. <a href="https://assetstore.unity.com/packages/tools/camera/devicecamerawebgl-180966">DeviceCameraWebGL</a>
3. <a href="https://github.com/ToughNutToCrack/ARWT">ARWT</a>

Unfortunately, we could not test the first two listed solutions, as they could only be purchased for a fee.

We were able to test ARWT. ARWT allows users to bring small games or applications into reality. Since the documentation of the code was incomplete or not available and we were not helped when asked, we could not achieve a solution through ARWT either.

ARWT allowed us to open the device's camera in the browser, but AR tracking did not work and the user interface was not displayed.

Through a lot of research we found out that the problem with Unity AR Foundation and Webgl is not only affecting us and it seems to be a general problem.

<!-- FURTHER DEVELOPMENT -->

## Further development ideas

* Improved room recognition 
* Panel for changing the password for the adminpanel
* Possibility to scan operating instructions as QR code through the QR scanner to get direct help with questions
* Targets get their own icons or avatars 
* Possibility to change the height of the targets when they are selected or added

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<!-- CONTACT -->
## Contact

If you have any question regarding our code or using the application please contact us via github or linkedin!

* Tobias Fleming - https://www.linkedin.com/in/tobias-fleming/
* Alexander Kröker - https://www.linkedin.com/in/alexander-kroeker/

Project Link: https://github.com/wintechis/IoT-Lab-AR-App

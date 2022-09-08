using System;
using UnityEngine;

namespace AR-Application
{
    /// <summary>
    /// Target class to store the data for each target provided by the json and make it accessable for all different types of classes in unity.
    /// Name and Position gets added to added.
    /// </summary>

    [System.Serializable]
    public class Target
    {

        public string Name;
        public Vector3 Position;
    }
}
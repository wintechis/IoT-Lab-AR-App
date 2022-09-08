using System;
using UnityEngine;

namespace AR-Application
{
    /// <summary>
    /// Facade with all different information of the target.
    /// For better identification a name gets added.
    /// </summary>

    [Serializable]
    public class TargetFacade : MonoBehaviour
    {
        public string Name;
    }
}
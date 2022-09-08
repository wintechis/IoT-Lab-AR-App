using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

namespace AR-Application { 

/// <summary>
/// Class for handling the navigation line to show the player the way to the target.
/// </summary>

public class NavigationController : MonoBehaviour
{

    /// <summary>
    /// Position of the selected target.
    /// </summary>
    public Vector3 TargetPosition { get; set; } = Vector3.zero;

    /// <summary>
    /// Line created to show the player the way to the target.
    /// </summary>
    [SerializeField]
    public LineRenderer line;

    /// <summary>
    /// Slider to adapt the height of the line.
    /// </summary>
    [SerializeField]
    public Slider navigationYOffset;

    /// <summary>
    /// Path created to show player the way to the target
    /// </summary>
    public NavMeshPath path;

    /// <summary>
    /// When game starts a new NavMeshPath gets creates and the display dimming get disabled.
    /// </summary>

    public void Start()
    {
        path = new NavMeshPath();

        // disable screen dimming
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    /// <summary>
    /// Method used to constantly update the path towards the target while player is standing or moving.
    /// </summary>

    public void Update()
    {
        if (line.gameObject.activeSelf && TargetPosition != Vector3.zero)
        {
            NavMesh.CalculatePath(transform.position, TargetPosition, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            Vector3[] calculatedPathAndOffset = AddLineOffset();
            line.SetPositions(calculatedPathAndOffset);
        }
    }

    /// <summary>
    /// Method used to create an array of positions to create the path.
    /// </summary>
    /// <returns> Returns an array of position were the line to show the path is placed. </returns>

    public Vector3[] AddLineOffset()
    {
        if (navigationYOffset.value == 0)
        {
            return path.corners;
        }

        Vector3[] offsettedLine = new Vector3[path.corners.Length];
        for (int i = 0; i < path.corners.Length; i++)
        {
            offsettedLine[i] = path.corners[i] + new Vector3(0, navigationYOffset.value, 0);
        }
        return offsettedLine;
    }

    /// <summary>
    /// Method for the tooglelinevisability button to show or hide the line towards the target.
    /// </summary>

    public void ToggleLineVisibility()
    {
        line.enabled = !line.enabled;
    }
}
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Quits application at user command or end of experience.
/// </summary>
public class Quitter : MonoBehaviour
{
    /// <summary>
    /// Called before the first frame update.
    /// If scene is final scene, launches coroutine to quit.
    /// </summary>
    private void Start()
    {
        if (SceneManager.GetActiveScene().buildIndex == 2)
        {
            StartCoroutine(QuitAtEnd());
        }
    }

    /// <summary>
    /// Called once per frame.
    /// Checks if user has requested quit via Escape key press.
    /// </summary>
    private void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    /// <summary>
    /// Quits application after duration of final scene.
    /// </summary>
    /// <returns>IEnumerator to iterate through seconds.</returns>
    private IEnumerator QuitAtEnd()
    {
        yield return new WaitForSeconds(120f);

        Application.Quit();
    }
}

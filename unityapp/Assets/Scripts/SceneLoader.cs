using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Loads given scene after given seconds.
/// </summary>
public class SceneLoader : MonoBehaviour
{
    public int m_TimeInSeconds, m_SceneToLoad;
    public GameObject m_AudioManager, m_DataManager;

    /// <summary>
    /// Called before the first frame update.
    /// Calls DontDestroyOnLoad on audio manager and data manager to make
    /// objects persist throughout scenes. Launches new scene.
    /// </summary>
    private void Start()
    {
        DontDestroyOnLoad(m_AudioManager);
        DontDestroyOnLoad(m_DataManager);
        StartCoroutine(LoadNewScene());
	}

    /// <summary>
    /// Load new scene after given time.
    /// </summary>
    /// <returns>IEnumerator to iterate through seconds.</returns>
    private IEnumerator LoadNewScene()
    {
        yield return new WaitForSeconds(m_TimeInSeconds);

        SceneManager.LoadScene(m_SceneToLoad);
    }
}

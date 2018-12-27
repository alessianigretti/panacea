using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public int m_TimeInSeconds, m_SceneToLoad;
    public GameObject m_AudioManager, m_DataManager;

    void Start()
    {
        DontDestroyOnLoad(m_AudioManager);
        DontDestroyOnLoad(m_DataManager);
        StartCoroutine(LoadNewScene());
	}

    IEnumerator LoadNewScene()
    {
        yield return new WaitForSeconds(m_TimeInSeconds);

        SceneManager.LoadScene(m_SceneToLoad);
    }
}

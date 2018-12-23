using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public int m_TimeInSeconds, m_SceneToLoad;

    void Start()
    {
        StartCoroutine(LoadNewScene());
	}

    IEnumerator LoadNewScene()
    {
        yield return new WaitForSeconds(m_TimeInSeconds);

        SceneManager.LoadScene(m_SceneToLoad);
    }
}

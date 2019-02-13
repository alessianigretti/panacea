using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Quitter : MonoBehaviour
{
    private void Start()
    {
        if (SceneManager.GetActiveScene().buildIndex == 2)
        {
            StartCoroutine(QuitAtEnd());
        }
    }

    private void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    IEnumerator QuitAtEnd()
    {
        yield return new WaitForSeconds(120f);

        Application.Quit();
    }
}

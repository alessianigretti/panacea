using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Networking;

public class AudioMixerController : MonoBehaviour
{
    public AudioMixer m_AudioMixer;
    public string m_Url;

    private GeneticAlgorithm m_GA;
    private int m_Heartrate;
    private float m_ExposedPitch;

    void Start()
    {
        bool result = m_AudioMixer.GetFloat("Pitch", out m_ExposedPitch);
        Debug.Log(m_ExposedPitch);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            StartCoroutine(GetInfo());
            //audioMixer.SetFloat("Pitch", exposedPitch + 3);
        }
    }

    IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_Url);

        yield return www.SendWebRequest();

        m_Heartrate = System.Convert.ToInt32(www.downloadHandler.text);
        Debug.Log(m_Heartrate);
    }

    void RunGeneticAlgorithm()
    {
        //m_GA = new GeneticAlgorithm();
    }

    void RunFitnessFunction()
    {

    }
}

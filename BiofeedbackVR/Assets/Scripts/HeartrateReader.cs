using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class HeartrateReader : MonoBehaviour
{
    public string m_Url;

    private int m_Heartrate;

    void Update()
    {
        StartCoroutine(GetInfo());
    }

    public int GetHeartrate()
    {
        return m_Heartrate;
    }

    IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_Url);

        yield return www.SendWebRequest();

        m_Heartrate = System.Convert.ToInt32(www.downloadHandler.text);
        Debug.Log(m_Heartrate);
    }
}
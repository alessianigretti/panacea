using System;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// Fetches heartrate data from local web server.
/// </summary>
public class HeartrateReader : MonoBehaviour
{
    private string m_ServerUrl;
    private int m_Heartrate;

    /// <summary>
    /// Called before the first frame update.
    /// Launches coroutine and builds URL to local web server.
    /// </summary>
    private void Start()
    {
        StartCoroutine(Wait(.5f));
        m_ServerUrl = "http://" + GetLocalIPAddress() + ":8080/heartrate/GET";
    }

    /// <summary>
    /// Gets heartrate value.
    /// </summary>
    /// <returns>Heartrate value.</returns>
    public int GetHeartrate()
    {
        return m_Heartrate;
    }

    /// <summary>
    /// Gets local IP address from system to build URL to local web server.
    /// Source: https://stackoverflow.com/questions/6803073/get-local-ip-address
    /// </summary>
    /// <returns>Local IPv4 address.</returns>
    private static string GetLocalIPAddress()
    {
        var host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                return ip.ToString();
            }
        }
        throw new Exception("No network adapters with an IPv4 address in the system!");
    }

    /// <summary>
    /// Waits "seconds" before launching GetInfo() coroutine.
    /// </summary>
    /// <param name="seconds">Seconds to wait.</param>
    /// <returns>IEnumerator to iterate through seconds.</returns>
    private IEnumerator Wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);

        StartCoroutine(GetInfo());
    }

    /// <summary>
    /// Sends web request to server URL and assigns heartrate value.
    /// </summary>
    /// <returns>IEnumerator to send web request.</returns>
    private IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_ServerUrl);

        yield return www.SendWebRequest();

        int hr;
        if (System.Int32.TryParse(www.downloadHandler.text, out hr))
        {
            m_Heartrate = hr;
        }

        StartCoroutine(Wait(1f));
    }
}
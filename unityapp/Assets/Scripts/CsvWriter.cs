using UnityEngine;
using System;

/// <summary>
/// Helper class to write to CSV file during user testing phase.
/// </summary>
public class CsvWriter : MonoBehaviour
{
    [HideInInspector]
    public SaveData.CachedData m_UserData;

    private string m_FilePath;

    /// <summary>
    /// Called before the first frame update.
    /// Assigns data from UserData GameObject and file paths.
    /// </summary>
    private void Start()
    {
        m_UserData = GameObject.Find("UserData").GetComponent<SaveData>().m_CachedData;

        if (m_UserData.UsingGA)
        {
            m_FilePath = "C:/Users/Alessia/Desktop/Data/data_ga.csv";
        }
        else
        {
            m_FilePath = "C:/Users/Alessia/Desktop/Data/data_no_ga.csv";
        }
    }

    /// <summary>
    /// Writes user ID, name, timestamp and heartrate to CSV file.
    /// </summary>
    /// <param name="heartrate">Heartrate to write to CSV file.</param>
    public void Save(int heartrate)
    {
        if (m_UserData.Id != "")
        {
        string rowData = m_UserData.Id + "," + m_UserData.Name + "," + DateTime.Now.ToString() + "," + heartrate.ToString();

        string[] lines = System.IO.File.ReadAllLines(m_FilePath);
            for (int i = 0; i < lines.Length; i++)
            {
                if (lines[i].Substring(0, 1) == " ")
                {
                    lines[i] = rowData;
                    break;
                }
            }
            Array.Resize(ref lines, lines.Length + 1);
            lines[lines.Length - 1] = " ";

            System.IO.File.WriteAllLines(m_FilePath, lines);
        }
    }
}

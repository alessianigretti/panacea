using UnityEngine;
using System;

public class CsvWriter : MonoBehaviour
{
    public int m_ID;
    public string m_UserName;
    public bool m_Recording;

    private string m_FilePath = "Data/data.csv";

    public void Save(int heartrate)
    {
        if (m_Recording)
        {
            string rowData = m_ID.ToString() + "," + m_UserName + "," + DateTime.Now.ToString() + "," + heartrate.ToString();

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

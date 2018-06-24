using System;
using System.Collections;
using UnityEngine;

namespace AssemblyCSharp.Assets.Scripts
{
    public class StreamingAssetsGetter : MonoBehaviour
    {
        private string mapPath;
        private string simPath;

        public string mapContents = "";
        public string simContents = "";

        public delegate void ParserDelegates(string toParse);

        public StreamingAssetsGetter(string mapName, AlgorithmType type) {
            mapName = mapName.ToLower(); 
            this.mapPath = System.IO.Path.Combine(Application.streamingAssetsPath, mapName + ".net.xml");
            this.simPath = System.IO.Path.Combine(Application.streamingAssetsPath, mapName + "_" + type.ToString().Replace(' ', '_').ToLower() + "_full_output.xml");
        }

        public IEnumerator DownloadMap(ParserDelegates mapDelegate) {
            if (mapPath.Contains("://") || mapPath.Contains(":///"))
            {
                WWW www = new WWW(mapPath);
                yield return www;
                mapDelegate(www.text);
            }
            else
                mapDelegate(System.IO.File.ReadAllText(mapPath));
        }

        public IEnumerator DownloadSim(ParserDelegates simDelegate)
        {
            if (simPath.Contains("://") || simPath.Contains(":///"))
            {
                WWW www = new WWW(simPath);
                yield return www;
                simDelegate(www.text);
            }
            else
                simDelegate(System.IO.File.ReadAllText(simPath));
        }
    }
}

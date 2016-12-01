using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        Profiling.Profiler.AddFramesFromFile("mylog.log");
    }
}

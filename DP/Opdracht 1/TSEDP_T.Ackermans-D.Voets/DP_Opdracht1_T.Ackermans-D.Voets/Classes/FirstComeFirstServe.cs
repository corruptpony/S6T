using System.Collections.Generic;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    class FirstComeFirstServe : iDiskScheduler
    {
        public int ReadDisk(List<int> requests, int previousRequest)
        {
            int topValue = requests[0];
            requests.RemoveAt(0);
            return topValue;
        }
    }
}

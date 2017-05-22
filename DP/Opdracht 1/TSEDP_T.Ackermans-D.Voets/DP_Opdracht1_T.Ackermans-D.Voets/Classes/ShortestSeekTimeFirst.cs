using System;
using System.Collections.Generic;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    class ShortestSeekTimeFirst : iDiskScheduler
    {
        public int ReadDisk(List<int> requests, int previousRequest)
        {
            int closestValue = previousRequest;
            int difference = 100;
            foreach (int i in requests)
            {
                if(Math.Abs(i - previousRequest) < difference)
                {
                    difference = Math.Abs(i - previousRequest);
                    closestValue = i;
                }
            }

            previousRequest = closestValue;
            requests.RemoveAt(requests.IndexOf(closestValue)); 
            return closestValue;
        }
    }
}

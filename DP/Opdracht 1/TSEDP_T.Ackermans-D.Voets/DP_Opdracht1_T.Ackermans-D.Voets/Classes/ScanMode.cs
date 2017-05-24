using System;
using System.Collections.Generic;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    class ScanMode : iDiskScheduler
    {
        private int targetLocation = -1;

        public int ReadDisk(List<int> requests, int previousRequest)
        {
            int difference;
            if (targetLocation == -1)
            {
                int furthestValue = previousRequest;
                difference = 0;
                foreach (int i in requests)
                {
                    if (Math.Abs(i - previousRequest) > difference)
                    {
                        difference = Math.Abs(i - previousRequest);
                        furthestValue = i;
                    }
                }
                targetLocation = furthestValue;
            }

            int closestValue = previousRequest;
            difference = 100;
            foreach (int i in requests)
            {
                if (targetLocation < previousRequest)
                {
                    if (Math.Abs(i - previousRequest) < difference &&
                        i >= targetLocation &&
                        i <= previousRequest)
                    {
                        difference = Math.Abs(i - previousRequest);
                        closestValue = i;
                    }
                }
                else
                {
                    if (Math.Abs(i - previousRequest) < difference &&
                        i <= targetLocation &&
                        i >= previousRequest)
                    {
                        difference = Math.Abs(i - previousRequest);
                        closestValue = i;
                    }
                }
                    
            }

            if(closestValue == targetLocation)
            {
                targetLocation = -1;
            }

            previousRequest = closestValue;
            requests.RemoveAt(requests.IndexOf(closestValue));
            return closestValue;
        }
    }
}

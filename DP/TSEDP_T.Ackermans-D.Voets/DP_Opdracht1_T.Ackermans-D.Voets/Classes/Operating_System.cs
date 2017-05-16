using System.Collections.Generic;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    class Operating_System
    {
        private iDiskScheduler diskScheduler;
        private List<int> requests;
        private int lastProcessedRequest;

        public Operating_System()
        {
            requests = new List<int>(new int[] { 40, 12, 22, 66, 67, 33, 80, 75, 85, 65, 8 });
            lastProcessedRequest = 50; // Start at the middle of the disk
        }

        public void SetDiskScheduler(iDiskScheduler ds)
        {
            diskScheduler = ds;
        }

        public void AddRequest(int request)
        {
            requests.Add(request);
        }
        
        public int ProcessRequests()
        {
            if (requests != null && requests.Count > 0)
            {
                lastProcessedRequest = diskScheduler.ReadDisk(requests, lastProcessedRequest);
                return lastProcessedRequest;
            }
            return -1;
        }

        public List<int> getRequests()
        {
            return requests;                
        }    
    }
}

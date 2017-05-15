using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TSEDP_Opdracht_1_T.Ackermans_D.Voets
{
    class Operating_System
    {
        iDiskScheduler diskScheduler;
        List<int> requests;

        public Operating_System(iDiskScheduler ds)
        {
            requests = new List<int>(new int[] { 40, 12, 22, 66, 67, 33, 80, 75, 85, 65, 8 });
            diskScheduler = ds;
        }



        public void ProcessRequests()
        {
            if (requests != null)
            {
                diskScheduler.readDisk(requests);
            }
        }

        public void PrintRequestList()
        {
            foreach (int i in requests)
            {
                Console.Write(i.ToString() + " ");
            }
            Console.WriteLine("");
        }
        
    }
}

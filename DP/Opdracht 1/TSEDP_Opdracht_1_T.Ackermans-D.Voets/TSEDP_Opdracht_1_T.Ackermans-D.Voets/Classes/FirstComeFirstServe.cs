using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TSEDP_Opdracht_1_T.Ackermans_D.Voets
{
    class FirstComeFirstServe : iDiskScheduler
    {
        public void readDisk(List<int> requests)
        {
            try
            {
                Console.WriteLine(" This is the result for First Come First Serve: ");
                while (requests.Count > 0)
                {
                    Console.Write(requests[0] + " ");
                    requests.RemoveAt(0);
                }
                Console.ReadKey();
            }
            catch (Exception e)
            {
                Console.WriteLine(" Error reading First Come First Serve");
                Console.WriteLine(" Press any key to exit...");
                Console.ReadKey();
                Environment.Exit(-1);
            }
        }
    }
}

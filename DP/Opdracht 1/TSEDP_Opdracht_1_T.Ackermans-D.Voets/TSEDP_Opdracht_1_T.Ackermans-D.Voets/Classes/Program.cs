using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TSEDP_Opdracht_1_T.Ackermans_D.Voets
{
    class Program
    {
        static void Main(string[] args)
        {
            iDiskScheduler DS;
            Operating_System OS;

            Console.WriteLine(" Disk scheduler simulation by T.Ackermans and D.Voets");
            Console.WriteLine(" ----------------------------------------------------");
            Console.WriteLine("");
            Console.WriteLine(" Options: ");
            Console.WriteLine(" 1. First Come First Serve");
            Console.WriteLine(" 2. Shortest Seek Time First");
            Console.WriteLine(" 3. Scan Mode");

            int option = 0;
            while (option < 1 || option > 3)
            {
                Console.Write(" Choose an option 1, 2 or 3: ");
                try
                {
                    option = Convert.ToInt32(Console.ReadLine());
                }
                catch { }    
            }
            Console.WriteLine(" You chose option: " + option + " press any key to begin: ");
            Console.ReadKey();

            switch (option)
            {
                case 1:
                    DS = new FirstComeFirstServe();
                    break;
                case 2:
                    DS = new ShortestSeekTimeFirst();
                    break;
                case 3:
                    DS = new ScanMode();
                    break;
                default:
                    DS = new FirstComeFirstServe();
                    break;
            }
            OS = new Operating_System(DS);

            Console.WriteLine("");
            Console.WriteLine(" This is the requests list: ");
            Console.WriteLine("");

            OS.PrintRequestList();
            OS.ProcessRequests();
        }
    }
}

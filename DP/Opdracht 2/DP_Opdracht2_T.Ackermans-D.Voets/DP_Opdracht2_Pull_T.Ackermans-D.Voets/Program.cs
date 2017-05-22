using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms;
using System.Threading;

namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets
{
    static class Program
    {
        private static Wallstreet wallstreet;

        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            wallstreet = new Wallstreet();
            var appleThread = new Thread(ThreadAppleStart);
            appleThread.TrySetApartmentState(ApartmentState.STA);
            appleThread.Start();
            var microsoftThread = new Thread(ThreadMicrosoftStart);
            microsoftThread.TrySetApartmentState(ApartmentState.STA);
            microsoftThread.Start();
            var shellThread = new Thread(ThreadShellStart);
            shellThread.TrySetApartmentState(ApartmentState.STA);
            shellThread.Start();

            Application.Run(wallstreet);
        }

        private static void ThreadAppleStart()
        {
            Application.Run(new Apple(wallstreet));
        }
        private static void ThreadMicrosoftStart()
        {
            Application.Run(new FedEx(wallstreet));
        }
        private static void ThreadShellStart()
        {
            Application.Run(new Shell(wallstreet));
        }
    }
}

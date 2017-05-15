using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TSEDP_Opdracht_1_T.Ackermans_D.Voets
{
    interface iDiskScheduler
    {
        void readDisk(List<int> requests);
    }
}

using System.Collections.Generic;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    interface iDiskScheduler
    {
        int ReadDisk(List<int> requests, int previousRequest);
    }
}

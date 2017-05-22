using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DP_Opdracht2_Push
{
    interface iPushSubject
    {
        void Attach();
        void Detach();
        void Notify();
    }
}

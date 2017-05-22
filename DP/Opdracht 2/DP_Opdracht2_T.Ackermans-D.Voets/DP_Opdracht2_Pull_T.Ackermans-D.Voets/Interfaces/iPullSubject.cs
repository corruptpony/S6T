using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DP_Opdracht2_Pull
{
    public interface iPullSubject
    {
        void Attach(iPullObserver observer);
        void Detach(iPullObserver observer);
        void Notify();
        int GetState();
    }
}

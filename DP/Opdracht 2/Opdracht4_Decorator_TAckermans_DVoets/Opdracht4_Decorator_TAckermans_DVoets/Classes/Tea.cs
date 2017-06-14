using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    class Tea : iBeverage
    {
        public double cost()
        {
            return 1.80;
        }

        public override string ToString()
        {
            return "Tea";
        }
    }
}

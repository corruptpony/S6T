using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    class Coffee : iBeverage
    {
        public double cost()
        {
            return 2.10;
        }

        public override string ToString()
        {
            return "Coffee";
        }
    }
}

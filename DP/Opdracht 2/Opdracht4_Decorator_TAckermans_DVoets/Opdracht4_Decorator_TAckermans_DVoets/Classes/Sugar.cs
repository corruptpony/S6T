using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    class Sugar : CondimentDecorator
    {
        public Sugar(iBeverage b)
        {
            beverage = b;
        }
        public override double cost()
        {
            return beverage.cost() + 0.20;
        }

        public override string ToString()
        {
            return "Sugar";
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    class Cream : CondimentDecorator
    {
        public Cream(iBeverage b)
        {
            beverage = b;
        }

        public override double cost()
        {
            return beverage.cost() + 0.25;
        }

        public override string ToString()
        {
            return "Cream";
        }
    }
}

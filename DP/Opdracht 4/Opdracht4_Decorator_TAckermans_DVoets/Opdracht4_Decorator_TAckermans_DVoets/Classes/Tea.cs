﻿namespace Opdracht4_Decorator_TAckermans_DVoets
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

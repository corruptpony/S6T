﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    abstract class CondimentDecorator : iBeverage
    {
        protected iBeverage beverage;

        public abstract double cost();
    }
}

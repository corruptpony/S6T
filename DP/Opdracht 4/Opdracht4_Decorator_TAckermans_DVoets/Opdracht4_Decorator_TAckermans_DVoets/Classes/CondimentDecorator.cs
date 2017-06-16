namespace Opdracht4_Decorator_TAckermans_DVoets
{
    abstract class CondimentDecorator : iBeverage
    {
        protected iBeverage beverage;

        public CondimentDecorator(iBeverage b)
        {
            beverage = b;
        }

        public abstract double cost();
    }
}
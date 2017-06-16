namespace Opdracht4_Decorator_TAckermans_DVoets
{
    class Caramel : CondimentDecorator
    {
        public Caramel(iBeverage b) : base(b)
        {
        }

        public override double cost()
        {
            return beverage.cost() + 0.80;
        }

        public override string ToString()
        {
            return "Caramel";
        }
    }
}

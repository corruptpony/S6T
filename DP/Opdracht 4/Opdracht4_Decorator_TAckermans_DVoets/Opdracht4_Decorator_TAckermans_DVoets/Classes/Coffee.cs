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

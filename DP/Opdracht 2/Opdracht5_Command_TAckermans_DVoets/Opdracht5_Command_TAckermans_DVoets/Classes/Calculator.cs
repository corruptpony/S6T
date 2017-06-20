namespace Opdracht5_Command_TAckermans_DVoets
{
    class Calculator
    {
        private double current;

        public Calculator()
        {
            current = 0;
        }

        public double Operation(char calculateOperator, double operand)
        {
            switch(calculateOperator)
            {
                case '+':
                    current += operand;
                    break;
                case '-':
                    current -= operand;
                    break;
                case '*':
                    current *= operand;
                    break;
                case '/':
                    current /= operand;
                    break;
            }
            return current;
        }
    }
}

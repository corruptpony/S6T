using System;

namespace Opdracht5_Command_TAckermans_DVoets
{
    class CrazyCalculatorCommand : Command
    {
        private char calculateOperator;
        private double operand;

        public CrazyCalculatorCommand(Calculator c, char _calculateOperator, double _operand) : base(c)
        {
            calculateOperator = _calculateOperator;
            operand = _operand;
        }

        public override double Execute()
        {
            double result = calculator.Operation(calculateOperator, operand);
            //We dont like the first result so we calculate again, Crazy right!?
            return calculator.Operation(calculateOperator, operand);
        }

        public override double UnExecute()
        {
            double result = calculator.Operation(Undo(calculateOperator), operand);
            //We dont like the first result so we calculate again, Crazy right!?
            return calculator.Operation(Undo(calculateOperator), operand);
        }

        private char Undo(char calculateOperator)
        {
            switch (calculateOperator)
            {
                case '+':
                    return '-';
                case '-':
                    return '+';
                case '*':
                    return '/';
                case '/':
                    return '*';
                default:
                    throw new ArgumentException("calculateOperator");
            }
        }
    }
}

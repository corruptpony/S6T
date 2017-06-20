using System;

namespace Opdracht5_Command_TAckermans_DVoets
{
    class CalculatorCommand : Command
    {
        private char calculateOperator;
        private double operand;

        public CalculatorCommand(Calculator c, char _calculateOperator, double _operand) : base(c)
        {
            calculateOperator = _calculateOperator;
            operand = _operand;
        }

        public override double Execute()
        {
            return calculator.Operation(calculateOperator, operand);
        }

        public override double UnExecute()
        {
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

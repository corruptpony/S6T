using System.Collections.Generic;

namespace Opdracht5_Command_TAckermans_DVoets
{
    class User
    {
        private List<Command> commands = new List<Command>();
        private int current = 0;

        public double Redo()
        {
            double result = 0;
            if (current < commands.Count - 1)
            {
                Command command = commands[current++];
                result = command.Execute();
            }
            return result;
        }

        public double Undo()
        {
            double result = 0;
            if (current > 0)
            {
                Command command = commands[--current] as Command;
                result = command.UnExecute();
            }
            return result;
        }

        public double Compute(Calculator c, char operation, double operand)
        {
            Command command = new CalculatorCommand(c, operation, operation);
            return callExecute(command);
        }

        public double CrazyCompute(Calculator c, char operation, double operand)
        {
            Command command = new CrazyCalculatorCommand(c, operation, operation);
            return callExecute(command);
        }

        private double callExecute(Command command)
        {
            double result = command.Execute();

            commands.Add(command);
            current++;
            return result;
        }
    }
}

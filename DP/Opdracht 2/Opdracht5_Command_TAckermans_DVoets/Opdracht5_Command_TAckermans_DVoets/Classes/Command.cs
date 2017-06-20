namespace Opdracht5_Command_TAckermans_DVoets
{
    abstract class Command
    {
        protected Calculator calculator;

        public Command(Calculator c)
        {
            calculator = c;
        }

        public abstract double Execute();
        public abstract double UnExecute();
    }
}

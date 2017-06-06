using System;

namespace DP_Opdracht3_T.Ackermans_D.Voets
{
    class MinionGame : iGameFactory
    {
        public iFemaleFigure createFemaleFigure()
        {
            return new Minioness();
        }

        public iFood createFood()
        {
            return new Banana();
        }

        public iHouse createHouse()
        {
            return new GruHouse();
        }

        public iMaleFigure createMaleFigure()
        {
            return new Minion();
        }

        public iVehicle createVehicle()
        {
            return new SuperMegaDeathCar();
        }

        public override string ToString()
        {
            return "Minion Game";
        }
    }
}

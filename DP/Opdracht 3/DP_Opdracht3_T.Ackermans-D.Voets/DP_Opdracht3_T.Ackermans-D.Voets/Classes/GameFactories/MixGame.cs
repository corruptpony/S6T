using System;

namespace DP_Opdracht3_T.Ackermans_D.Voets
{
    class MixGame : iGameFactory
    {
        public iFemaleFigure createFemaleFigure()
        {
            return new Minioness();
        }

        public iFood createFood()
        {
            return new Mushroom();
        }

        public iHouse createHouse()
        {
            return new GruHouse();
        }

        public iMaleFigure createMaleFigure()
        {
            return new BigSmurf();
        }

        public iVehicle createVehicle()
        {
            return new SuperMegaDeathCar();
        }

        public override string ToString()
        {
            return "Mix Game";
        }
    }
}

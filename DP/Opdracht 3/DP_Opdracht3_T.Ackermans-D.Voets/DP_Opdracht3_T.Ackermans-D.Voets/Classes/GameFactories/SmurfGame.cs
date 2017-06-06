using System;

namespace DP_Opdracht3_T.Ackermans_D.Voets
{
    class SmurfGame : iGameFactory
    {
        public iFemaleFigure createFemaleFigure()
        {
            return new Smurfin();
        }

        public iFood createFood()
        {
            return new Mushroom();
        }

        public iHouse createHouse()
        {
            return new ShroomHouse();
        }

        public iMaleFigure createMaleFigure()
        {
            return new BigSmurf();
        }

        public iVehicle createVehicle()
        {
            return new ShanksPony();
        }

        public override string ToString()
        {
            return "Smurf Game";
        }
    }
}

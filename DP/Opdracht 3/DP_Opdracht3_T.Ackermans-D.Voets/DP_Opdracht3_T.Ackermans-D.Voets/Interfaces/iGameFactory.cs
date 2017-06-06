namespace DP_Opdracht3_T.Ackermans_D.Voets
{
    interface iGameFactory
    {
        iFemaleFigure createFemaleFigure();
        iFood createFood();
        iHouse createHouse();
        iMaleFigure createMaleFigure();
        iVehicle createVehicle();
    }
}

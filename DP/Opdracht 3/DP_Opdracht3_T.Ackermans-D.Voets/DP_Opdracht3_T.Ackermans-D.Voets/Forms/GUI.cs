using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DP_Opdracht3_T.Ackermans_D.Voets
{
    public partial class GUI : Form
    {
        private List<iGameFactory> myFactories;

        public GUI()
        {
            InitializeComponent();

            myFactories = new List<iGameFactory>();
            myFactories.Add(new MinionGame());
            myFactories.Add(new SmurfGame());
            myFactories.Add(new MixGame());

            foreach (iGameFactory g in myFactories)
            {
                cbFactorySelector.Items.Add(g);
            }

            cbFactorySelector.SelectedIndex = 0;
        }

        private void cbFactorySelector_SelectedValueChanged(object sender, EventArgs e)
        {
            iGameFactory selectedFactory = (iGameFactory)cbFactorySelector.SelectedItem;

            setLabels(selectedFactory);
        }

        private void setLabels(iGameFactory selectedFactory)
        {
            lblFemaleProp1.Text = selectedFactory.createFemaleFigure().sing();
            lblFemaleProp2.Text = selectedFactory.createFemaleFigure().cook();

            lblMaleProp1.Text = selectedFactory.createMaleFigure().work();
            lblMaleProp2.Text = selectedFactory.createMaleFigure().fight();

            lblHouseProp1.Text = selectedFactory.createHouse().squeak();
            lblHouseProp2.Text = selectedFactory.createHouse().collapse();

            lblVehicleProp1.Text = selectedFactory.createVehicle().drive();
            lblVehicleProp2.Text = selectedFactory.createVehicle().honk();

            lblFoodProp1.Text = selectedFactory.createFood().eat();
        }
    }
}

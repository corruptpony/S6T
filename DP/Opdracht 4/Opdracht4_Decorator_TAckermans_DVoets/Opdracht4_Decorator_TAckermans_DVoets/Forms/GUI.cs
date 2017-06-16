using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace Opdracht4_Decorator_TAckermans_DVoets
{
    public partial class GUI : Form
    {
        private List<iBeverage> myBeverages;

        private iBeverage theBeverage;

        public GUI()
        {
            InitializeComponent();

            myBeverages = new List<iBeverage>();
            myBeverages.Add(new Coffee());
            myBeverages.Add(new Tea());

            foreach (iBeverage b in myBeverages)
            {
                cbBeverageSelector.Items.Add(b);
            }
        }

        private void btnAddSugar_Click(object sender, EventArgs e)
        {
            addCondiment(new Sugar(theBeverage));            
        }

        private void btnAddCream_Click(object sender, EventArgs e)
        {
            addCondiment(new Cream(theBeverage));
        }

        private void btnAddCaramel_Click(object sender, EventArgs e)
        {
            addCondiment(new Caramel(theBeverage));
        }

        private void cbBeverageSelector_SelectedIndexChanged(object sender, EventArgs e)
        {
            lbMyBeverage.Items.Clear();
            theBeverage = (iBeverage)cbBeverageSelector.SelectedItem;
            update();
        }

        private void update()
        {
            lblCost.Text = theBeverage.cost().ToString();
            lbMyBeverage.Items.Add(theBeverage.ToString());
        }

        private void addCondiment(iBeverage b)
        {
            if (theBeverage != null)
            {
                theBeverage = b;
                update();
            }
            else
            {
                MessageBox.Show("Select a beverage first!");
            }
        }
    }
}

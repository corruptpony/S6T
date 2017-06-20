using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Opdracht5_Command_TAckermans_DVoets
{
    public partial class GUI : Form
    {
        private User user;
        private Calculator calculator;

        public GUI()
        {
            InitializeComponent();

            user = new User();
            calculator = new Calculator();

            cbCalculatorSelector.Items.Add("Normal");
            cbCalculatorSelector.Items.Add("Crazy");
            cbCalculatorSelector.SelectedIndex = 0;

            cbOperator.Items.Add('+');
            cbOperator.Items.Add('-');
            cbOperator.Items.Add('*');
            cbOperator.Items.Add('/');
            cbOperator.SelectedIndex = 0;
        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            
            try {
                switch(cbCalculatorSelector.SelectedItem.ToString())
                {
                    case "Normal":
                        lbResult.Text = user.Compute(calculator, 
                            Convert.ToChar(cbOperator.SelectedItem),
                            Convert.ToDouble(tbInputOne.Text)).ToString();
                        break;
                    case "Crazy":
                        lbResult.Text = user.CrazyCompute(calculator,
                            Convert.ToChar(cbOperator.SelectedItem),
                            Convert.ToDouble(tbInputOne.Text)).ToString();
                        break;
                }  
            }
            catch
            {
                MessageBox.Show("Vul een nummer in!");
            }
        }

        private void btnUndo_Click(object sender, EventArgs e)
        {
            double result = user.Undo();
            if (result != 0)
            {
                lbResult.Text = result.ToString();
            }
            
        }

        private void btnRedo_Click(object sender, EventArgs e)
        {
            double result = user.Redo();
            if (result != 0)
            {
                lbResult.Text = result.ToString();
            }
        }
    }
}

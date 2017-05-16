using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    public partial class GUI : Form
    {
        private Operating_System OS;

        public GUI()
        {
            InitializeComponent();
            OS = new Operating_System();
            updateValuesToRead();
        }

        private void updateValuesToRead()
        {
            lbValuesToRead.Items.Clear();
            foreach (int i in OS.getRequests())
            {
                lbValuesToRead.Items.Add(i);
            }
        }

        private void osReadTimer_Tick(object sender, EventArgs e)
        {
            int newValue = OS.ProcessRequests();
            if(newValue > -1)
            {
                lbLastReadValue.Items.Insert(0, newValue);
            }
            updateValuesToRead();
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            if(btnStart.Text == "Start")
            {
                switch (cbStrategy.Text)
                {
                    case "FirstComeFirstServe":
                        OS.SetDiskScheduler(new FirstComeFirstServe());
                        break;
                    case "ShortestSeekTime":
                        OS.SetDiskScheduler(new ShortestSeekTimeFirst());
                        break;
                    case "ScanMode":
                        OS.SetDiskScheduler(new ScanMode());
                        break;
                    default:
                        MessageBox.Show("Please select a valid strategy.");
                        return;
                }
                osReadTimer.Enabled = true;
                btnStart.Text = "Stop";
                cbStrategy.Enabled = false;
            }
            else
            {
                cbStrategy.Enabled = true;
                osReadTimer.Enabled = false;
                btnStart.Text = "Start";
            }
           
        }

        private void btnAddValue_Click(object sender, EventArgs e)
        {
            try 
            {
                int newRequest = Convert.ToInt32(tbValue.Text);
                if(newRequest > 0 && newRequest < 100)
                {
                    OS.AddRequest(newRequest);
                    updateValuesToRead();
                }
                else
                {
                    throw new ArgumentOutOfRangeException();
                }
            }
            catch
            {
                MessageBox.Show("Please enter a number between 1 and 99.");
            }
            finally
            {
                tbValue.Text = "";
            }
        }

        private void btnExample_Click(object sender, EventArgs e)
        {
            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                OS.AddRequest(r.Next(1, 100));
            }
                
            updateValuesToRead();
        }
    }
}

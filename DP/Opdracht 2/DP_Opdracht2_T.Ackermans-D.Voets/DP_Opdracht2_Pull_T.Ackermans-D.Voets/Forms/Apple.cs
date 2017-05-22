using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DP_Opdracht2_Pull;

namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms
{
    public partial class Apple : Form, iPullObserver
    {
        private iPullSubject subject;
        private int data;

        public Apple(iPullSubject s)
        {
            InitializeComponent();
            subject = s;
        }

        private void cbSubscribe_CheckedChanged(object sender, EventArgs e)
        {
            if (cbSubscribe.Checked)
            {
                subject.Attach(this);
            }
            else
            {
                subject.Detach(this);
            }
        }

        public void UpdateData()
        {
            data = subject.GetState();
        }

        private void tmUpdateTimer_Tick(object sender, EventArgs e)
        {
            lbValue.Text = data.ToString();
        }
    }
}

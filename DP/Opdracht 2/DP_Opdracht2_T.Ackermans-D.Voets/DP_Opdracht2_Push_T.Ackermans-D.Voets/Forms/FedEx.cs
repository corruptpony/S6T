using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DP_Opdracht2_Push;

namespace DP_Opdracht2_Push_T.Ackermans_D.Voets.Forms
{
    public partial class FedEx : Form, iPushObserver
    {
        private iPushSubject subject;
        private int data;

        public FedEx(iPushSubject s)
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

        public void UpdateData(int state)
        {
            data = state;
        }

        private void tmUpdateTimer_Tick_1(object sender, EventArgs e)
        {
            lbValue.Text = data.ToString();
        }
    }
}

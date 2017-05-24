using System;
using System.Windows.Forms;
using DP_Opdracht2_Push;

namespace DP_Opdracht2_Push_T.Ackermans_D.Voets.Forms
{
    public partial class Shell : Form, iPushObserver
    {
        private iPushSubject subject;
        private int data;

        public Shell(iPushSubject s)
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

        private void tmUpdateTimer_Tick(object sender, EventArgs e)
        {
            lbValue.Text = data.ToString();
        }
    }
}

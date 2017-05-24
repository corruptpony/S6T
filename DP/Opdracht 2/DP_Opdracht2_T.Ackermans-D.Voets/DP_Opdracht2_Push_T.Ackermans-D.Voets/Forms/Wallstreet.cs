using System;
using System.Collections.Generic;
using System.Windows.Forms;
using DP_Opdracht2_Push;

namespace DP_Opdracht2_Push_T.Ackermans_D.Voets.Forms
{
    public partial class Wallstreet : Form, iPushSubject
    {
        private List<iPushObserver> observers;
        private int stockIndex;

        public Wallstreet()
        {
            InitializeComponent();
            stockIndex = 5;
            observers = new List<iPushObserver>();
        }

        public void Attach(iPushObserver o)
        {
            observers.Add(o);
        }

        public void Detach(iPushObserver o)
        {
            observers.Remove(o);
        }

        public void Notify()
        {
            foreach (iPushObserver o in observers)
            {
                o.UpdateData(stockIndex);
            }
        }

        private void tmUpdateTimer_Tick(object sender, EventArgs e)
        {
            Random r = new Random();
            stockIndex = r.Next(0, 21);
            lbValue.Text = stockIndex.ToString();
            Notify();
        }
    }
}

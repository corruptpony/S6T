using System;
using System.Collections.Generic;
using System.Windows.Forms;
using DP_Opdracht2_Pull;

namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms
{
    public partial class Wallstreet : Form, iPullSubject
    {
        private List<iPullObserver> observers;
        private int stockIndex;

        public Wallstreet()
        {
            InitializeComponent();
            stockIndex = 5;
            observers = new List<iPullObserver>();
        }

        public void Attach(iPullObserver o)
        {
            observers.Add(o);
        }

        public void Detach(iPullObserver o)
        {
            observers.Remove(o);
        }

        public void Notify()
        {
            foreach (iPullObserver o in observers)
            {
                o.UpdateData();
            }
        }

        public int GetState()
        {
            return stockIndex;
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

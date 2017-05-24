namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms
{
    partial class Wallstreet
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.tmUpdateTimer = new System.Windows.Forms.Timer(this.components);
            this.label1 = new System.Windows.Forms.Label();
            this.lbValue = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // tmUpdateTimer
            // 
            this.tmUpdateTimer.Enabled = true;
            this.tmUpdateTimer.Interval = 400;
            this.tmUpdateTimer.Tick += new System.EventHandler(this.tmUpdateTimer_Tick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(34, 126);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(105, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Current Stock Value:";
            // 
            // lbValue
            // 
            this.lbValue.AutoSize = true;
            this.lbValue.Location = new System.Drawing.Point(168, 126);
            this.lbValue.Name = "lbValue";
            this.lbValue.Size = new System.Drawing.Size(13, 13);
            this.lbValue.TabIndex = 1;
            this.lbValue.Text = "0";
            // 
            // Wallstreet
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.lbValue);
            this.Controls.Add(this.label1);
            this.Name = "Wallstreet";
            this.Text = "Wallstreet";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Timer tmUpdateTimer;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lbValue;
    }
}
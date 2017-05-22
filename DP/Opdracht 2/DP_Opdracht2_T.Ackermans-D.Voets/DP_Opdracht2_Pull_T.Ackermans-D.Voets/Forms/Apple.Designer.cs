namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms
{
    partial class Apple
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
            this.label1 = new System.Windows.Forms.Label();
            this.lbValue = new System.Windows.Forms.Label();
            this.cbSubscribe = new System.Windows.Forms.CheckBox();
            this.tmUpdateTimer = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(65, 32);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(68, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Stock Value:";
            // 
            // lbValue
            // 
            this.lbValue.AutoSize = true;
            this.lbValue.Location = new System.Drawing.Point(172, 32);
            this.lbValue.Name = "lbValue";
            this.lbValue.Size = new System.Drawing.Size(13, 13);
            this.lbValue.TabIndex = 1;
            this.lbValue.Text = "0";
            // 
            // cbSubscribe
            // 
            this.cbSubscribe.AutoSize = true;
            this.cbSubscribe.Location = new System.Drawing.Point(68, 90);
            this.cbSubscribe.Name = "cbSubscribe";
            this.cbSubscribe.Size = new System.Drawing.Size(73, 17);
            this.cbSubscribe.TabIndex = 2;
            this.cbSubscribe.Text = "Subscribe";
            this.cbSubscribe.UseVisualStyleBackColor = true;
            this.cbSubscribe.CheckedChanged += new System.EventHandler(this.cbSubscribe_CheckedChanged);
            // 
            // tmUpdateTimer
            // 
            this.tmUpdateTimer.Enabled = true;
            this.tmUpdateTimer.Interval = 2000;
            this.tmUpdateTimer.Tick += new System.EventHandler(this.tmUpdateTimer_Tick);
            // 
            // Apple
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.cbSubscribe);
            this.Controls.Add(this.lbValue);
            this.Controls.Add(this.label1);
            this.Name = "Apple";
            this.Text = "Apple";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lbValue;
        private System.Windows.Forms.CheckBox cbSubscribe;
        private System.Windows.Forms.Timer tmUpdateTimer;
    }
}
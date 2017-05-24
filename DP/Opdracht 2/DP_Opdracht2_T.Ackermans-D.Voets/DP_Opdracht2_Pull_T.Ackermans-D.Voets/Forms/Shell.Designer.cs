namespace DP_Opdracht2_Pull_T.Ackermans_D.Voets.Forms
{
    partial class Shell
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
            this.cbSubscribe = new System.Windows.Forms.CheckBox();
            this.lbValue = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.tmUpdateTimer = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // cbSubscribe
            // 
            this.cbSubscribe.AutoSize = true;
            this.cbSubscribe.Location = new System.Drawing.Point(86, 111);
            this.cbSubscribe.Name = "cbSubscribe";
            this.cbSubscribe.Size = new System.Drawing.Size(73, 17);
            this.cbSubscribe.TabIndex = 5;
            this.cbSubscribe.Text = "Subscribe";
            this.cbSubscribe.UseVisualStyleBackColor = true;
            this.cbSubscribe.CheckedChanged += new System.EventHandler(this.cbSubscribe_CheckedChanged);
            // 
            // lbValue
            // 
            this.lbValue.AutoSize = true;
            this.lbValue.Location = new System.Drawing.Point(190, 53);
            this.lbValue.Name = "lbValue";
            this.lbValue.Size = new System.Drawing.Size(13, 13);
            this.lbValue.TabIndex = 4;
            this.lbValue.Text = "0";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(83, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(68, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "Stock Value:";
            // 
            // tmUpdateTimer
            // 
            this.tmUpdateTimer.Enabled = true;
            this.tmUpdateTimer.Tick += new System.EventHandler(this.tmUpdateTimer_Tick);
            // 
            // Shell
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.cbSubscribe);
            this.Controls.Add(this.lbValue);
            this.Controls.Add(this.label1);
            this.Name = "Shell";
            this.Text = "Shell";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox cbSubscribe;
        private System.Windows.Forms.Label lbValue;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Timer tmUpdateTimer;
    }
}
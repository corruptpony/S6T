namespace DP_Opdracht1_T.Ackermans_D.Voets
{
    partial class GUI
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
            this.lbValuesToRead = new System.Windows.Forms.ListBox();
            this.lbLastReadValue = new System.Windows.Forms.ListBox();
            this.btnAddValue = new System.Windows.Forms.Button();
            this.cbStrategy = new System.Windows.Forms.ComboBox();
            this.btnStart = new System.Windows.Forms.Button();
            this.tbValue = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.osReadTimer = new System.Windows.Forms.Timer(this.components);
            this.btnExample = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbValuesToRead
            // 
            this.lbValuesToRead.FormattingEnabled = true;
            this.lbValuesToRead.Location = new System.Drawing.Point(14, 141);
            this.lbValuesToRead.Name = "lbValuesToRead";
            this.lbValuesToRead.Size = new System.Drawing.Size(158, 95);
            this.lbValuesToRead.TabIndex = 0;
            // 
            // lbLastReadValue
            // 
            this.lbLastReadValue.FormattingEnabled = true;
            this.lbLastReadValue.Location = new System.Drawing.Point(181, 141);
            this.lbLastReadValue.Name = "lbLastReadValue";
            this.lbLastReadValue.Size = new System.Drawing.Size(156, 95);
            this.lbLastReadValue.TabIndex = 1;
            // 
            // btnAddValue
            // 
            this.btnAddValue.Location = new System.Drawing.Point(14, 55);
            this.btnAddValue.Name = "btnAddValue";
            this.btnAddValue.Size = new System.Drawing.Size(193, 23);
            this.btnAddValue.TabIndex = 2;
            this.btnAddValue.Text = "Add";
            this.btnAddValue.UseVisualStyleBackColor = true;
            this.btnAddValue.Click += new System.EventHandler(this.btnAddValue_Click);
            // 
            // cbStrategy
            // 
            this.cbStrategy.DisplayMember = "FirstComeFirstServe";
            this.cbStrategy.FormattingEnabled = true;
            this.cbStrategy.Items.AddRange(new object[] {
            "FirstComeFirstServe",
            "ShortestSeekTime",
            "ScanMode"});
            this.cbStrategy.Location = new System.Drawing.Point(213, 29);
            this.cbStrategy.Name = "cbStrategy";
            this.cbStrategy.Size = new System.Drawing.Size(121, 21);
            this.cbStrategy.TabIndex = 3;
            this.cbStrategy.Text = "FirstComeFirstServe";
            // 
            // btnStart
            // 
            this.btnStart.Location = new System.Drawing.Point(213, 57);
            this.btnStart.Name = "btnStart";
            this.btnStart.Size = new System.Drawing.Size(121, 23);
            this.btnStart.TabIndex = 4;
            this.btnStart.Text = "Start";
            this.btnStart.UseVisualStyleBackColor = true;
            this.btnStart.Click += new System.EventHandler(this.btnStart_Click);
            // 
            // tbValue
            // 
            this.tbValue.Location = new System.Drawing.Point(14, 30);
            this.tbValue.Name = "tbValue";
            this.tbValue.Size = new System.Drawing.Size(193, 20);
            this.tbValue.TabIndex = 5;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(15, 11);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(192, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "Enter a disk location between 1 and 99";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(230, 13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(92, 13);
            this.label2.TabIndex = 7;
            this.label2.Text = "Choose a strategy";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(47, 121);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(82, 13);
            this.label3.TabIndex = 8;
            this.label3.Text = "Reading Queue";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(210, 121);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(86, 13);
            this.label4.TabIndex = 9;
            this.label4.Text = "Last Read Value";
            // 
            // osReadTimer
            // 
            this.osReadTimer.Interval = 1000;
            this.osReadTimer.Tick += new System.EventHandler(this.osReadTimer_Tick);
            // 
            // btnExample
            // 
            this.btnExample.Location = new System.Drawing.Point(12, 84);
            this.btnExample.Name = "btnExample";
            this.btnExample.Size = new System.Drawing.Size(195, 23);
            this.btnExample.TabIndex = 10;
            this.btnExample.Text = "Fill with 10 random example locations";
            this.btnExample.UseVisualStyleBackColor = true;
            this.btnExample.Click += new System.EventHandler(this.btnExample_Click);
            // 
            // GUI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(349, 248);
            this.Controls.Add(this.btnExample);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.tbValue);
            this.Controls.Add(this.btnStart);
            this.Controls.Add(this.cbStrategy);
            this.Controls.Add(this.btnAddValue);
            this.Controls.Add(this.lbLastReadValue);
            this.Controls.Add(this.lbValuesToRead);
            this.Name = "GUI";
            this.Text = "Disk Scheduling Simulator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox lbValuesToRead;
        private System.Windows.Forms.ListBox lbLastReadValue;
        private System.Windows.Forms.Button btnAddValue;
        private System.Windows.Forms.ComboBox cbStrategy;
        private System.Windows.Forms.Button btnStart;
        private System.Windows.Forms.TextBox tbValue;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Timer osReadTimer;
        private System.Windows.Forms.Button btnExample;
    }
}


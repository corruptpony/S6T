namespace Opdracht4_Decorator_TAckermans_DVoets
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
            this.label1 = new System.Windows.Forms.Label();
            this.cbBeverageSelector = new System.Windows.Forms.ComboBox();
            this.lbMyBeverage = new System.Windows.Forms.ListBox();
            this.btnAddSugar = new System.Windows.Forms.Button();
            this.btnAddCream = new System.Windows.Forms.Button();
            this.btnAddCaramel = new System.Windows.Forms.Button();
            this.lblCost = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 126);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(106, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "This beverage costs:";
            // 
            // cbBeverageSelector
            // 
            this.cbBeverageSelector.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbBeverageSelector.FormattingEnabled = true;
            this.cbBeverageSelector.Location = new System.Drawing.Point(13, 13);
            this.cbBeverageSelector.Name = "cbBeverageSelector";
            this.cbBeverageSelector.Size = new System.Drawing.Size(121, 21);
            this.cbBeverageSelector.TabIndex = 2;
            this.cbBeverageSelector.SelectedIndexChanged += new System.EventHandler(this.cbBeverageSelector_SelectedIndexChanged);
            // 
            // lbMyBeverage
            // 
            this.lbMyBeverage.FormattingEnabled = true;
            this.lbMyBeverage.Location = new System.Drawing.Point(13, 41);
            this.lbMyBeverage.Name = "lbMyBeverage";
            this.lbMyBeverage.Size = new System.Drawing.Size(120, 82);
            this.lbMyBeverage.TabIndex = 3;
            // 
            // btnAddSugar
            // 
            this.btnAddSugar.Location = new System.Drawing.Point(139, 41);
            this.btnAddSugar.Name = "btnAddSugar";
            this.btnAddSugar.Size = new System.Drawing.Size(75, 23);
            this.btnAddSugar.TabIndex = 4;
            this.btnAddSugar.Text = "Sugar";
            this.btnAddSugar.UseVisualStyleBackColor = true;
            this.btnAddSugar.Click += new System.EventHandler(this.btnAddSugar_Click);
            // 
            // btnAddCream
            // 
            this.btnAddCream.Location = new System.Drawing.Point(140, 71);
            this.btnAddCream.Name = "btnAddCream";
            this.btnAddCream.Size = new System.Drawing.Size(75, 23);
            this.btnAddCream.TabIndex = 5;
            this.btnAddCream.Text = "Cream";
            this.btnAddCream.UseVisualStyleBackColor = true;
            this.btnAddCream.Click += new System.EventHandler(this.btnAddCream_Click);
            // 
            // btnAddCaramel
            // 
            this.btnAddCaramel.Location = new System.Drawing.Point(139, 101);
            this.btnAddCaramel.Name = "btnAddCaramel";
            this.btnAddCaramel.Size = new System.Drawing.Size(75, 23);
            this.btnAddCaramel.TabIndex = 6;
            this.btnAddCaramel.Text = "Caramel";
            this.btnAddCaramel.UseVisualStyleBackColor = true;
            this.btnAddCaramel.Click += new System.EventHandler(this.btnAddCaramel_Click);
            // 
            // lblCost
            // 
            this.lblCost.AutoSize = true;
            this.lblCost.Location = new System.Drawing.Point(161, 127);
            this.lblCost.Name = "lblCost";
            this.lblCost.Size = new System.Drawing.Size(28, 13);
            this.lblCost.TabIndex = 7;
            this.lblCost.Text = "0.00";
            // 
            // GUI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(238, 163);
            this.Controls.Add(this.lblCost);
            this.Controls.Add(this.btnAddCaramel);
            this.Controls.Add(this.btnAddCream);
            this.Controls.Add(this.btnAddSugar);
            this.Controls.Add(this.lbMyBeverage);
            this.Controls.Add(this.cbBeverageSelector);
            this.Controls.Add(this.label1);
            this.Name = "GUI";
            this.Text = "GUI";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox cbBeverageSelector;
        private System.Windows.Forms.ListBox lbMyBeverage;
        private System.Windows.Forms.Button btnAddSugar;
        private System.Windows.Forms.Button btnAddCream;
        private System.Windows.Forms.Button btnAddCaramel;
        private System.Windows.Forms.Label lblCost;
    }
}


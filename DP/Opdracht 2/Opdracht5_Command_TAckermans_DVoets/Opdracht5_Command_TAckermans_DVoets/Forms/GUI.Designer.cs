namespace Opdracht5_Command_TAckermans_DVoets
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
            this.lbResult = new System.Windows.Forms.Label();
            this.tbInputOne = new System.Windows.Forms.TextBox();
            this.btnCalc = new System.Windows.Forms.Button();
            this.btnUndo = new System.Windows.Forms.Button();
            this.btnRedo = new System.Windows.Forms.Button();
            this.cbOperator = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.cbCalculatorSelector = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // lbResult
            // 
            this.lbResult.AutoSize = true;
            this.lbResult.Location = new System.Drawing.Point(148, 64);
            this.lbResult.Name = "lbResult";
            this.lbResult.Size = new System.Drawing.Size(13, 13);
            this.lbResult.TabIndex = 0;
            this.lbResult.Text = "0";
            // 
            // tbInputOne
            // 
            this.tbInputOne.Location = new System.Drawing.Point(12, 12);
            this.tbInputOne.Name = "tbInputOne";
            this.tbInputOne.Size = new System.Drawing.Size(75, 20);
            this.tbInputOne.TabIndex = 1;
            // 
            // btnCalc
            // 
            this.btnCalc.Location = new System.Drawing.Point(12, 38);
            this.btnCalc.Name = "btnCalc";
            this.btnCalc.Size = new System.Drawing.Size(75, 23);
            this.btnCalc.TabIndex = 2;
            this.btnCalc.Text = "Calculate";
            this.btnCalc.UseVisualStyleBackColor = true;
            this.btnCalc.Click += new System.EventHandler(this.btnCalc_Click);
            // 
            // btnUndo
            // 
            this.btnUndo.Location = new System.Drawing.Point(93, 38);
            this.btnUndo.Name = "btnUndo";
            this.btnUndo.Size = new System.Drawing.Size(75, 23);
            this.btnUndo.TabIndex = 3;
            this.btnUndo.Text = "Undo";
            this.btnUndo.UseVisualStyleBackColor = true;
            this.btnUndo.Click += new System.EventHandler(this.btnUndo_Click);
            // 
            // btnRedo
            // 
            this.btnRedo.Location = new System.Drawing.Point(174, 38);
            this.btnRedo.Name = "btnRedo";
            this.btnRedo.Size = new System.Drawing.Size(75, 23);
            this.btnRedo.TabIndex = 4;
            this.btnRedo.Text = "Redo";
            this.btnRedo.UseVisualStyleBackColor = true;
            this.btnRedo.Click += new System.EventHandler(this.btnRedo_Click);
            // 
            // cbOperator
            // 
            this.cbOperator.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbOperator.FormattingEnabled = true;
            this.cbOperator.Location = new System.Drawing.Point(93, 12);
            this.cbOperator.Name = "cbOperator";
            this.cbOperator.Size = new System.Drawing.Size(75, 21);
            this.cbOperator.TabIndex = 5;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(102, 64);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(40, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "Result:";
            // 
            // cbCalculatorSelector
            // 
            this.cbCalculatorSelector.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbCalculatorSelector.FormattingEnabled = true;
            this.cbCalculatorSelector.Location = new System.Drawing.Point(175, 12);
            this.cbCalculatorSelector.Name = "cbCalculatorSelector";
            this.cbCalculatorSelector.Size = new System.Drawing.Size(74, 21);
            this.cbCalculatorSelector.TabIndex = 7;
            // 
            // GUI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(408, 119);
            this.Controls.Add(this.cbCalculatorSelector);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.cbOperator);
            this.Controls.Add(this.btnRedo);
            this.Controls.Add(this.btnUndo);
            this.Controls.Add(this.btnCalc);
            this.Controls.Add(this.tbInputOne);
            this.Controls.Add(this.lbResult);
            this.Name = "GUI";
            this.Text = "/";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbResult;
        private System.Windows.Forms.TextBox tbInputOne;
        private System.Windows.Forms.Button btnCalc;
        private System.Windows.Forms.Button btnUndo;
        private System.Windows.Forms.Button btnRedo;
        private System.Windows.Forms.ComboBox cbOperator;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox cbCalculatorSelector;
    }
}


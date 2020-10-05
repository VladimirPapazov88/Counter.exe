procedure InitializeComponent;
    begin
        self.lbl := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // lbl
        // 
        self.lbl.Enabled := false;
        self.lbl.Font := new System.Drawing.Font('Microsoft Sans Serif', 24.25);
        self.lbl.Location := new System.Drawing.Point(24, 17);
        self.lbl.Name := 'lbl';
        self.lbl.Size := new System.Drawing.Size(236, 44);
        self.lbl.TabIndex := 0;
        self.lbl.Text := '0';
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 24.25);
        self.button1.Location := new System.Drawing.Point(24, 77);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(112, 45);
        self.button1.TabIndex := 1;
        self.button1.Text := '+';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 24.25);
        self.button2.Location := new System.Drawing.Point(148, 77);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(112, 45);
        self.button2.TabIndex := 2;
        self.button2.Text := '-';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(276, 140);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.lbl);
        self.Name := 'Form1';
        self.Text := 'Counter.exe';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}









	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::ToolStripMenuItem^ Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÂÌ¸1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÂÌ¸2ToolStripMenuItem;





	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ToolStripMenuItem^ ˆ≥Î¸ToolStripMenuItem;





	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar6;
	private: System::Windows::Forms::ProgressBar^ progressBar7;
	private: System::Windows::Forms::ToolStripMenuItem^ ˘Ó‰ÂÌÌÓToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë·≥ÍÓ‚ÓToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˆ≥Î¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->˘Ó‰ÂÌÌÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚Ë·≥ÍÓ‚ÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÂÌ¸1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÂÌ¸2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(394, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem
			// 
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ˆ≥Î¸ToolStripMenuItem,
					this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem, this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem
			});
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Name = L"Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem";
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Text = L"Õ‡Î‡¯ÚÛ‚‡ÌÌˇ";
			// 
			// ˆ≥Î¸ToolStripMenuItem
			// 
			this->ˆ≥Î¸ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->˘Ó‰ÂÌÌÓToolStripMenuItem,
					this->‚Ë·≥ÍÓ‚ÓToolStripMenuItem
			});
			this->ˆ≥Î¸ToolStripMenuItem->Name = L"ˆ≥Î¸ToolStripMenuItem";
			this->ˆ≥Î¸ToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->ˆ≥Î¸ToolStripMenuItem->Text = L"Õ‡ÁÌ‡˜ËÚË ˜‡Ò";
			this->ˆ≥Î¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::ˆ≥Î¸ToolStripMenuItem_Click);
			// 
			// ˘Ó‰ÂÌÌÓToolStripMenuItem
			// 
			this->˘Ó‰ÂÌÌÓToolStripMenuItem->Name = L"˘Ó‰ÂÌÌÓToolStripMenuItem";
			this->˘Ó‰ÂÌÌÓToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->˘Ó‰ÂÌÌÓToolStripMenuItem->Text = L"ŸÓ‰ÂÌÌÓ";
			// 
			// ‚Ë·≥ÍÓ‚ÓToolStripMenuItem
			// 
			this->‚Ë·≥ÍÓ‚ÓToolStripMenuItem->Name = L"‚Ë·≥ÍÓ‚ÓToolStripMenuItem";
			this->‚Ë·≥ÍÓ‚ÓToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->‚Ë·≥ÍÓ‚ÓToolStripMenuItem->Text = L"¬Ë·≥ÍÓ‚Ó";
			// 
			// Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem
			// 
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->‰ÂÌ¸1ToolStripMenuItem,
					this->‰ÂÌ¸2ToolStripMenuItem
			});
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem->Name = L"Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem";
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem->Text = L"Œ˜ËÒÚËÚË ˜‡Ò Á‡...";
			// 
			// ‰ÂÌ¸1ToolStripMenuItem
			// 
			this->‰ÂÌ¸1ToolStripMenuItem->Name = L"‰ÂÌ¸1ToolStripMenuItem";
			this->‰ÂÌ¸1ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->‰ÂÌ¸1ToolStripMenuItem->Text = L"¬Ò≥ ÁÌ‡˜ÂÌÌˇ";
			this->‰ÂÌ¸1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::‰ÂÌ¸1ToolStripMenuItem_Click);
			// 
			// ‰ÂÌ¸2ToolStripMenuItem
			// 
			this->‰ÂÌ¸2ToolStripMenuItem->Name = L"‰ÂÌ¸2ToolStripMenuItem";
			this->‰ÂÌ¸2ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->‰ÂÌ¸2ToolStripMenuItem->Text = L"¬Ë·≥ÍÓ‚Ó";
			this->‰ÂÌ¸2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::‰ÂÌ¸2ToolStripMenuItem_Click);
			// 
			// Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem
			// 
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Name = L"Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem";
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Text = L"Œ˜ËÒÚËÚË ÒÚ‡ÚËÒÚËÍÛ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(86, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 26);
			this->label1->TabIndex = 16;
			this->label1->Text = L"œÓ„ÂÒ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(21, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 19);
			this->label2->TabIndex = 17;
			this->label2->Text = L"ƒÂÌ¸ 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(21, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 18;
			this->label3->Text = L"ƒÂÌ¸ 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(21, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 19);
			this->label4->TabIndex = 19;
			this->label4->Text = L"ƒÂÌ¸ 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(21, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 19);
			this->label5->TabIndex = 20;
			this->label5->Text = L"ƒÂÌ¸ 4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(21, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 19);
			this->label6->TabIndex = 21;
			this->label6->Text = L"ƒÂÌ¸ 5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(21, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 22;
			this->label7->Text = L"ƒÂÌ¸ 6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(21, 276);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 19);
			this->label8->TabIndex = 23;
			this->label8->Text = L"ƒÂÌ¸ 7";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(199, 84);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(196, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 14);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Ì‡„‡‰Û‚‡ÌÌˇ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(290, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 14);
			this->label10->TabIndex = 26;
			this->label10->Text = L"˜‡Ò";
			this->label10->Click += gcnew System::EventHandler(this, &Main::label10_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(199, 116);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 27;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(199, 147);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 28;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(199, 178);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(199, 212);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 30;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(199, 249);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 31;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(199, 280);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 32;
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(290, 85);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(290, 117);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 34;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(290, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(289, 179);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 36;
			this->label14->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(289, 213);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(288, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 38;
			this->label16->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(290, 281);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 39;
			this->label17->Text = L"0";
			// 
			// progressBar1
			// 
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar1->Location = System::Drawing::Point(91, 85);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(82, 13);
			this->progressBar1->TabIndex = 40;
			// 
			// progressBar2
			// 
			this->progressBar2->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar2->Location = System::Drawing::Point(91, 118);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(82, 13);
			this->progressBar2->TabIndex = 41;
			// 
			// progressBar3
			// 
			this->progressBar3->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar3->Location = System::Drawing::Point(91, 149);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(82, 13);
			this->progressBar3->TabIndex = 42;
			// 
			// progressBar4
			// 
			this->progressBar4->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar4->Location = System::Drawing::Point(91, 180);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(82, 13);
			this->progressBar4->TabIndex = 43;
			// 
			// progressBar5
			// 
			this->progressBar5->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar5->Location = System::Drawing::Point(91, 212);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(82, 13);
			this->progressBar5->TabIndex = 44;
			// 
			// progressBar6
			// 
			this->progressBar6->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar6->Location = System::Drawing::Point(91, 249);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(82, 13);
			this->progressBar6->TabIndex = 45;
			// 
			// progressBar7
			// 
			this->progressBar7->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar7->Location = System::Drawing::Point(91, 281);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(82, 13);
			this->progressBar7->TabIndex = 46;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(25, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"—Ú‡ÚËÒÚËÍ‡";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(213, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 23);
			this->button1->TabIndex = 48;
			this->button1->Text = L"¬Ô‡‚Ë";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(160, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(201, 20);
			this->dateTimePicker1->TabIndex = 49;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(394, 352);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->progressBar7);
			this->Controls->Add(this->progressBar6);
			this->Controls->Add(this->progressBar5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main";
			this->Text = L"CodeRise";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ‰ÂÌ¸3ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ˆ≥Î¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ‰ÂÌ¸1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ‰ÂÌ¸7ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ‰ÂÌ¸2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	//-------------------------------------------------------------------------------
	// ÕÂ ‚ÒÚË„ ÔÓÔ‡ˆ˛‚‡ÚË Ì‡‰ ÙÛÌÍˆ≥ÓÌ‡ÎÓÏ :Ò
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//-------------------------------------------------------------------------------
	// ÕÂ ‚ÒÚË„ ÔÓÔ‡ˆ˛‚‡ÚË Ì‡‰ ÙÛÌÍˆ≥ÓÌ‡ÎÓÏ :Ò
}
};
}

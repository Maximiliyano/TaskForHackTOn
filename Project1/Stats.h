#pragma once
#include <iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÂÌ¸1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÂÌ¸2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ˆ≥Î¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ „ÓÎÓ‚Ì‡ToolStripMenuItem;






	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stats::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÂÌ¸1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÂÌ¸2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˆ≥Î¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->„ÓÎÓ‚Ì‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(100, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"√ÓÎÓ‚Ì‡";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Stats::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"¬Ô‡‚ ‚ËÍÓÌ‡ÌÓ:";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &Stats::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"¬ËÚ‡˜ÂÌÓ ˜‡ÒÛ:";
			this->label2->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"¿ÍÚË‚Ì≥ÒÚ¸:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"÷≥Î¸:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(205, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 15);
			this->label6->TabIndex = 9;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &Stats::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(205, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 15);
			this->label7->TabIndex = 10;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(205, 137);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 15);
			this->label8->TabIndex = 11;
			this->label8->Text = L"¬≥‰ÒÛÚÌˇ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(205, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 15);
			this->label9->TabIndex = 12;
			this->label9->Text = L"ÕÂ ÔËÁÌ‡˜ÂÌ‡";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::SystemColors::Desktop;
			this->label->Font = (gcnew System::Drawing::Font(L"Corbel", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->Location = System::Drawing::Point(125, 34);
			this->label->Name = L"label";
			this->label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label->Size = System::Drawing::Size(113, 26);
			this->label->TabIndex = 0;
			this->label->Text = L"—Ú‡ÚËÒÚËÍ‡\r\n";
			this->label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label->Click += gcnew System::EventHandler(this, &Stats::label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem,
					this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem, this->„ÓÎÓ‚Ì‡ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(361, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem
			// 
			this->ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem->Name = L"ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem";
			this->ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->ÒÚ‡ÚËÒÚËÍ‡ToolStripMenuItem->Text = L"—Ú‡ÚËÒÚËÍ‡";
			// 
			// Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem
			// 
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem,
					this->Ó˜ËÒÚËÚË◊‡Ò«‡ToolStripMenuItem, this->ˆ≥Î¸ToolStripMenuItem
			});
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Name = L"Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem";
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Text = L"Õ‡Î‡¯ÚÛ‚‡ÌÌˇ";
			// 
			// Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem
			// 
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Name = L"Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem";
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->Ó˜ËÒÚËÚË—Ú‡ÚËÒÚËÍÛToolStripMenuItem->Text = L"Œ˜ËÒÚËÚË ÒÚ‡ÚËÒÚËÍÛ";
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
			this->‰ÂÌ¸1ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->‰ÂÌ¸1ToolStripMenuItem->Text = L"¬Ò≥ ÁÌ‡˜ÂÌÌˇ";
			// 
			// ‰ÂÌ¸2ToolStripMenuItem
			// 
			this->‰ÂÌ¸2ToolStripMenuItem->Name = L"‰ÂÌ¸2ToolStripMenuItem";
			this->‰ÂÌ¸2ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->‰ÂÌ¸2ToolStripMenuItem->Text = L"ŒÍÂÏËÈ ‰ÂÌ¸";
			// 
			// ˆ≥Î¸ToolStripMenuItem
			// 
			this->ˆ≥Î¸ToolStripMenuItem->Name = L"ˆ≥Î¸ToolStripMenuItem";
			this->ˆ≥Î¸ToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->ˆ≥Î¸ToolStripMenuItem->Text = L"Õ‡ÁÌ‡˜ËÚË ˜‡Ò";
			// 
			// „ÓÎÓ‚Ì‡ToolStripMenuItem
			// 
			this->„ÓÎÓ‚Ì‡ToolStripMenuItem->Name = L"„ÓÎÓ‚Ì‡ToolStripMenuItem";
			this->„ÓÎÓ‚Ì‡ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->„ÓÎÓ‚Ì‡ToolStripMenuItem->Text = L"√ÓÎÓ‚Ì‡";
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(361, 254);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Stats";
			this->Text = L"CodeRise";
			this->Load += gcnew System::EventHandler(this, &Stats::Stats_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Stats_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}


};
}

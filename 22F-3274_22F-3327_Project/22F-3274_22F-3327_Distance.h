#pragma once
extern int distance;
int ai = 0, aj = 0, di = 0, dj = 0;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Distance Selector
	public ref class Distance : public System::Windows::Forms::Form {
	public:
		Distance(void) {
			InitializeComponent();
		}
	protected:
		~Distance() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::ComponentModel::Container^ components;

#pragma region Component Code
		   void InitializeComponent(void) {
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			   this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(57, 76);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->ReadOnly = true;
			   this->richTextBox1->Size = System::Drawing::Size(384, 299);
			   this->richTextBox1->TabIndex = 0;
			   this->richTextBox1->Text = L"";
			   // 
			   // trackBar1
			   // 
			   this->trackBar1->BackColor = System::Drawing::SystemColors::Control;
			   this->trackBar1->Location = System::Drawing::Point(45, 377);
			   this->trackBar1->Maximum = 135;
			   this->trackBar1->Name = L"trackBar1";
			   this->trackBar1->Size = System::Drawing::Size(406, 45);
			   this->trackBar1->TabIndex = 1;
			   this->trackBar1->TickFrequency = 0;
			   this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			   this->trackBar1->Scroll += gcnew System::EventHandler(this, &Distance::trackBar1_Scroll);
			   // 
			   // trackBar2
			   // 
			   this->trackBar2->AllowDrop = true;
			   this->trackBar2->BackColor = System::Drawing::SystemColors::Control;
			   this->trackBar2->Location = System::Drawing::Point(13, 66);
			   this->trackBar2->Maximum = 50;
			   this->trackBar2->Name = L"trackBar2";
			   this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			   this->trackBar2->Size = System::Drawing::Size(45, 318);
			   this->trackBar2->TabIndex = 2;
			   this->trackBar2->TickFrequency = 0;
			   this->trackBar2->Scroll += gcnew System::EventHandler(this, &Distance::trackBar2_Scroll);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::LawnGreen;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			   this->button1->Location = System::Drawing::Point(58, 354);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(20, 20);
			   this->button1->TabIndex = 3;
			   this->button1->Text = L"D";
			   this->button1->UseVisualStyleBackColor = false;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->ForeColor = System::Drawing::Color::DarkGreen;
			   this->button2->Location = System::Drawing::Point(58, 354);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(20, 20);
			   this->button2->TabIndex = 4;
			   this->button2->Text = L"A";
			   this->button2->UseVisualStyleBackColor = false;
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox1->Location = System::Drawing::Point(59, 54);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(141, 23);
			   this->checkBox1->TabIndex = 5;
			   this->checkBox1->Text = L"Select Departure Location";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Distance::checkBox1_CheckedChanged);
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox2->Location = System::Drawing::Point(200, 54);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(123, 23);
			   this->checkBox2->TabIndex = 6;
			   this->checkBox2->Text = L"Select Arrival Location";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Distance::checkBox2_CheckedChanged);
			   // 
			   // Distance
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(454, 420);
			   this->Controls->Add(this->checkBox2);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->trackBar2);
			   this->Controls->Add(this->trackBar1);
			   this->Controls->Add(this->richTextBox1);
			   this->Name = L"Distance";
			   this->Text = L"Distance Selector: Transport Manager+";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Distance::Distance_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Distance::Distance_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void Distance_Load(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Location = System::Drawing::Point(58 + ai * 2.67592, 354 - aj * 5.54);
		this->button2->Location = System::Drawing::Point(58 + di * 2.67592, 354 - dj * 5.54);
		this->checkBox1->Checked = true;
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			aj = this->trackBar2->Value;
			this->button1->Location = System::Drawing::Point(58 + ai * 2.67592, 354 - aj * 5.54);
		}
		else {
			dj = this->trackBar2->Value;
			this->button2->Location = System::Drawing::Point(58 + di * 2.67592, 354 - dj * 5.54);
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			ai = this->trackBar1->Value;
			this->button1->Location = System::Drawing::Point(58 + ai * 2.67592, 354 - aj * 5.54);
		}
		else {
			di = this->trackBar1->Value;
			this->button2->Location = System::Drawing::Point(58 + di * 2.67592, 354 - dj * 5.54);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			this->checkBox2->Checked = false;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->trackBar1->Value = ai;
			this->trackBar2->Value = aj;
		}
		else {
			this->checkBox1->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox2->Checked) {
			this->checkBox1->Checked = false;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->trackBar1->Value = di;
			this->trackBar2->Value = dj;
		}
		else {
			this->checkBox2->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void Distance_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		disx = Math::Sqrt(((ai - di) * (ai - di)) + ((aj - dj) * (aj - dj)));
	}
#pragma endregion
	};
#pragma endregion
}

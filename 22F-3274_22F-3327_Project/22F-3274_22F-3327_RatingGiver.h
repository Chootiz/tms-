#pragma once
extern float r1, r2;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Rating Form
	public ref class RatingGiver : public System::Windows::Forms::Form {
	public:
		RatingGiver(void) {
			InitializeComponent();
		}
	protected:
		~RatingGiver() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::ComponentModel::Container^ components;
#pragma region Componenet Code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			   this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(379, 24);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Please Rate the Driver and the Vehicle";
			   // 
			   // trackBar1
			   // 
			   this->trackBar1->Location = System::Drawing::Point(118, 56);
			   this->trackBar1->Name = L"trackBar1";
			   this->trackBar1->Size = System::Drawing::Size(179, 45);
			   this->trackBar1->TabIndex = 1;
			   this->trackBar1->Scroll += gcnew System::EventHandler(this, &RatingGiver::trackBar1_Scroll);
			   // 
			   // trackBar2
			   // 
			   this->trackBar2->Location = System::Drawing::Point(118, 117);
			   this->trackBar2->Name = L"trackBar2";
			   this->trackBar2->Size = System::Drawing::Size(179, 45);
			   this->trackBar2->TabIndex = 2;
			   this->trackBar2->Scroll += gcnew System::EventHandler(this, &RatingGiver::trackBar2_Scroll);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(0, 56);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(117, 26);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Rate Driver";
			   this->label2->Click += gcnew System::EventHandler(this, &RatingGiver::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(0, 117);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(124, 26);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Rate Vehicle";
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox1->Location = System::Drawing::Point(323, 56);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->ReadOnly = true;
			   this->richTextBox1->Size = System::Drawing::Size(68, 45);
			   this->richTextBox1->TabIndex = 5;
			   this->richTextBox1->Text = L"0.0";
			   // 
			   // richTextBox2
			   // 
			   this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox2->Location = System::Drawing::Point(323, 117);
			   this->richTextBox2->Name = L"richTextBox2";
			   this->richTextBox2->ReadOnly = true;
			   this->richTextBox2->Size = System::Drawing::Size(68, 45);
			   this->richTextBox2->TabIndex = 6;
			   this->richTextBox2->Text = L"0.0";
			   // 
			   // RatingGiver
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(409, 193);
			   this->Controls->Add(this->richTextBox2);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->trackBar2);
			   this->Controls->Add(this->trackBar1);
			   this->Controls->Add(this->label1);
			   this->Name = L"RatingGiver";
			   this->Text = L"Driver Rating: Transport Manager+";
			   this->Load += gcnew System::EventHandler(this, &RatingGiver::RatingGiver_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		r1 = this->trackBar1->Value / 2.0;
		std::string str = FloatToString(r1);
		System::String^ st2 = gcnew String(str.data());
		this->richTextBox1->Text = (st2);
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		r2 = this->trackBar2->Value / 2.0;
		std::string str = FloatToString(r2);
		System::String^ st2 = gcnew String(str.data());
		this->richTextBox2->Text = (st2);
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RatingGiver_Load(System::Object^ sender, System::EventArgs^ e) {
	}
#pragma endregion
	};
#pragma endregion
}

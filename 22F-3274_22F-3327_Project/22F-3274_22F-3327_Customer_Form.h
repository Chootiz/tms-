#pragma once
#include "22F-3274_22F-3327_Distance.h"
#include "22F-3274_22F-3327_Driver_Service.h"
#include "22F-3274_22F-3327_RatingGiver.h"
#include "22F-3274_22F-3327_Vehicle_Service.h"
int i, dID, vID, oID;
int price = 35;
extern int disx;
extern float r1, r2;
bool HideVcl;
extern TMS TMS_Main;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Customer Form
	public ref class Customer_Form : public System::Windows::Forms::Form {
	public:
		Customer_Form(void) {
			InitializeComponent();
		}
	protected:
		~Customer_Form() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::ComponentModel::Container^ components;
#pragma region Component Code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer_Form::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(12, 19);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(66, 26);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"label1";
			   this->label1->Click += gcnew System::EventHandler(this, &Customer_Form::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(299, 15);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(52, 21);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"label2";
			   this->label2->Click += gcnew System::EventHandler(this, &Customer_Form::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(12, 48);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(54, 22);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"label3";
			   this->label3->Click += gcnew System::EventHandler(this, &Customer_Form::label3_Click);
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton1->Location = System::Drawing::Point(16, 131);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(88, 49);
			   this->radioButton1->TabIndex = 3;
			   this->radioButton1->TabStop = true;
			   this->radioButton1->Text = L"\nDeposit Money\n ";
			   this->radioButton1->UseVisualStyleBackColor = false;
			   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::radioButton1_CheckedChanged);
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton2->Location = System::Drawing::Point(16, 186);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(91, 49);
			   this->radioButton2->TabIndex = 4;
			   this->radioButton2->TabStop = true;
			   this->radioButton2->Text = L"\n    Make Order  \n ";
			   this->radioButton2->UseVisualStyleBackColor = false;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::radioButton2_CheckedChanged);
			   // 
			   // radioButton3
			   // 
			   this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton3->AutoSize = true;
			   this->radioButton3->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton3->Location = System::Drawing::Point(16, 241);
			   this->radioButton3->Name = L"radioButton3";
			   this->radioButton3->Size = System::Drawing::Size(92, 49);
			   this->radioButton3->TabIndex = 5;
			   this->radioButton3->TabStop = true;
			   this->radioButton3->Text = L"\n   View Orders   \n ";
			   this->radioButton3->UseVisualStyleBackColor = false;
			   this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::radioButton3_CheckedChanged);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(211, 131);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(199, 20);
			   this->textBox1->TabIndex = 7;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &Customer_Form::textBox1_TextChanged);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(208, 114);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(155, 17);
			   this->label4->TabIndex = 8;
			   this->label4->Text = L"Enter Ammount to Deposit";
			   this->label4->Click += gcnew System::EventHandler(this, &Customer_Form::label4_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(212, 151);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(10, 13);
			   this->label5->TabIndex = 9;
			   this->label5->Text = L" ";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(211, 241);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(55, 49);
			   this->button1->TabIndex = 10;
			   this->button1->Text = L"<";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Customer_Form::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Location = System::Drawing::Point(272, 241);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(89, 49);
			   this->button2->TabIndex = 11;
			   this->button2->Text = L"Show Vehicles";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Customer_Form::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button3->Location = System::Drawing::Point(367, 241);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(87, 49);
			   this->button3->TabIndex = 12;
			   this->button3->Text = L"Place Order";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &Customer_Form::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Transparent;
			   this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->Location = System::Drawing::Point(460, 241);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(55, 49);
			   this->button4->TabIndex = 13;
			   this->button4->Text = L">";
			   this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &Customer_Form::button4_Click);
			   // 
			   // radioButton4
			   // 
			   this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton4->AutoSize = true;
			   this->radioButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton4->Location = System::Drawing::Point(15, 296);
			   this->radioButton4->Name = L"radioButton4";
			   this->radioButton4->Size = System::Drawing::Size(91, 49);
			   this->radioButton4->TabIndex = 14;
			   this->radioButton4->TabStop = true;
			   this->radioButton4->Text = L"\nDelete Account\n ";
			   this->radioButton4->UseVisualStyleBackColor = false;
			   this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::radioButton4_CheckedChanged);
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox1->Location = System::Drawing::Point(211, 104);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->ReadOnly = true;
			   this->richTextBox1->Size = System::Drawing::Size(304, 131);
			   this->richTextBox1->TabIndex = 16;
			   this->richTextBox1->Text = L"";
			   this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Customer_Form::richTextBox1_TextChanged);
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(272, 291);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(42, 21);
			   this->button5->TabIndex = 17;
			   this->button5->Text = L"<";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Customer_Form::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button6->Location = System::Drawing::Point(319, 291);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(42, 21);
			   this->button6->TabIndex = 18;
			   this->button6->Text = L">";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &Customer_Form::button6_Click);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox1->Location = System::Drawing::Point(211, 82);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(82, 23);
			   this->checkBox1->TabIndex = 19;
			   this->checkBox1->Text = L"Request Ride";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::checkBox1_CheckedChanged);
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox2->Location = System::Drawing::Point(292, 82);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(98, 23);
			   this->checkBox2->TabIndex = 20;
			   this->checkBox2->Text = L"Request Delivery";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Customer_Form::checkBox2_CheckedChanged);
			   // 
			   // button7
			   // 
			   this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button7->Location = System::Drawing::Point(414, 57);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(100, 49);
			   this->button7->TabIndex = 21;
			   this->button7->Text = L"Set Departure and Arrival";
			   this->button7->UseVisualStyleBackColor = false;
			   this->button7->Click += gcnew System::EventHandler(this, &Customer_Form::button7_Click);
			   // 
			   // button8
			   // 
			   this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button8->Location = System::Drawing::Point(521, 104);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(91, 37);
			   this->button8->TabIndex = 22;
			   this->button8->Text = L"Sort by Rating";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &Customer_Form::button8_Click);
			   // 
			   // button9
			   // 
			   this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button9->Location = System::Drawing::Point(521, 147);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(91, 37);
			   this->button9->TabIndex = 23;
			   this->button9->Text = L"Sort by Experience";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &Customer_Form::button9_Click);
			   // 
			   // button10
			   // 
			   this->button10->Location = System::Drawing::Point(368, 312);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(86, 37);
			   this->button10->TabIndex = 24;
			   this->button10->Text = L"View Driver History";
			   this->button10->UseVisualStyleBackColor = true;
			   this->button10->Click += gcnew System::EventHandler(this, &Customer_Form::button10_Click);
			   // 
			   // button11
			   // 
			   this->button11->Location = System::Drawing::Point(272, 312);
			   this->button11->Name = L"button11";
			   this->button11->Size = System::Drawing::Size(91, 37);
			   this->button11->TabIndex = 25;
			   this->button11->Text = L"View Vehicle History";
			   this->button11->UseVisualStyleBackColor = true;
			   this->button11->Click += gcnew System::EventHandler(this, &Customer_Form::button11_Click);
			   // 
			   // Customer_Form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(635, 361);
			   this->Controls->Add(this->button11);
			   this->Controls->Add(this->button10);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->checkBox2);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->radioButton4);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->radioButton3);
			   this->Controls->Add(this->radioButton2);
			   this->Controls->Add(this->radioButton1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"Customer_Form";
			   this->Text = L"Transport Manager+";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Customer_Form::Customer_Form_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Customer_Form::Customer_Form_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void Customer_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.LoadSavedData();
		std::ifstream CurrentAcc;
		std::string s1, s2, s3;
		CurrentAcc.open("Data/CurrentAcc.txt");
		while (!CurrentAcc.eof()) {
			CurrentAcc >> s1 >> s2;
		}
		if (s1 == "Customer") {
			i = StringToInt(s2);
			System::String^ name, ^ balance, ^ cnic;
			s3 = TMS_Main.C_Accounts[i]->getFName() + " " + TMS_Main.C_Accounts[i]->getLName();
			name = gcnew String(s3.data());
			s3 = TMS_Main.C_Accounts[i]->getID();
			cnic = gcnew String(s3.data());
			s3 = "Balance: PKR " + IntToString(TMS_Main.C_Accounts[i]->getbal());
			balance = gcnew String(s3.data());
			this->label1->Text = (name);
			this->label3->Text = (cnic);
			this->label2->Text = (balance);
		}
		else {
			this->Close();
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->richTextBox1->Hide();
			this->textBox1->Show();
			this->label4->Text = ("Enter Ammount to Deposit");
			this->label4->Show();
			this->label5->Show();
			this->button2->Text = ("Deposit");
			this->button2->Location = System::Drawing::Point(321, 171);
			this->button1->Hide();
			this->button2->Show();
			this->button3->Hide();
			this->button4->Hide();
			this->button5->Hide();
			this->button6->Hide();
			this->button7->Hide();
			this->button8->Hide();
			this->button9->Hide();
			this->button10->Hide();
			this->button11->Hide();
			this->checkBox1->Hide();
			this->checkBox2->Hide();
			this->radioButton1->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Text = "";
			this->button2->Location = System::Drawing::Point(272, 241);
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			this->radioButton1->Checked = false;
			this->radioButton3->Checked = false;
			this->richTextBox1->Show();
			this->button2->Text = ("Show Vehicles");
			this->button3->Text = ("Place Order");
			dID = 0;
			std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating());
			System::String^ st = gcnew String(str.data());
			richTextBox1->Text = (st);
			this->textBox1->Hide();
			this->button1->Show();
			this->button2->Show();
			this->button3->Show();
			this->button4->Show();
			this->label4->Hide();
			this->label5->Hide();
			this->radioButton2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Text = ("Show Vehicles");
			this->button5->Hide();
			this->button6->Hide();
			this->button8->Show();
			this->button9->Show();
			this->button10->Show();
			this->button11->Hide();
			this->button7->Text = "Set Departure and Arrival";
			this->button7->Show();
			this->checkBox1->Checked = true;
			this->checkBox1->Show();
			this->checkBox2->Show();
			HideVcl = 0;
		}
		else {
			this->radioButton2->BackColor = System::Drawing::Color::WhiteSmoke;

		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton3->Checked) {
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->button2->Text = ("Cancel Order");
			this->button3->Text = ("Confirm Order");
			this->richTextBox1->Show();
			this->richTextBox1->Text = ("\nYou have not placed any orders yet");
			this->textBox1->Hide();
			this->button1->Show();
			this->button2->Show();
			this->button3->Show();
			this->button4->Show();
			this->button5->Hide();
			this->button6->Hide();
			this->button7->Text = "Give Rating";
			this->button7->Show();
			this->button8->Hide();
			this->button9->Hide();
			this->button10->Hide();
			this->button11->Hide();
			dID = 0;
			oID = 0;
			if (TMS_Main.Orders.size()) {
				while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID < TMS_Main.Orders.size() - 1) {
					oID++;
				}
			}
			this->label4->Hide();
			this->label5->Hide();
			this->checkBox1->Hide();
			this->checkBox2->Hide();
			this->radioButton3->BackColor = System::Drawing::SystemColors::ControlDark;
			if (TMS_Main.Orders.size()) {
				int s = TMS_Main.Orders[oID]->getPlaced(), h, m;
				std::string AmPm = "AM";
				std::string s2;
				h = (s / 3600) % 24 + 5;
				if (TMS_Main.Orders[oID]->getAccepted()) s2 = "Accepted";
				else s2 = "Not Accepted";
				if (h > 12) {
					h %= 12;
					AmPm = "PM";
				}
				s %= 3600;
				m = s / 60;
				s /= 60;
				std::string str = "Order for a " + TMS_Main.Orders[oID]->getType() + ", Placed On " + IntToString(h) + ":";
				if (m < 10) str = str + "0";
				str = str + IntToString(m) + AmPm + "\nDriver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nStatus: " + s2;
				if (TMS_Main.C_Accounts[i]->getID() == TMS_Main.Orders[oID]->getCID()) {
					System::String^ st2 = gcnew String(str.data());
					this->richTextBox1->Text = (st2);
				}
			}
		}
		else {
			this->radioButton3->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton4->Checked) {
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->richTextBox1->Hide();
			this->textBox1->Show();
			this->label4->Show();
			this->label4->Text = ("Please enter your Password to to Delete the account");
			this->label5->Hide();
			this->button2->Text = ("Delete");
			this->button2->Location = System::Drawing::Point(321, 171);
			this->button1->Hide();
			this->button2->Show();
			this->button3->Hide();
			this->button4->Hide();
			this->button5->Hide();
			this->button6->Hide();
			this->button7->Hide();
			this->button8->Hide();
			this->button9->Hide();
			this->button10->Hide();
			this->button11->Hide();
			this->checkBox1->Hide();
			this->checkBox2->Hide();
			this->radioButton4->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Text = "";
			this->button2->Location = System::Drawing::Point(272, 241);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1 = Convert::ToString(textBox1->Text);
		std::string s2 = context.marshal_as<std::string>(s1);
		if (!(isInt(s2))) {
			this->label5->Text = ("Please Enter a Number");
		}
		else {
			this->label5->Text = ("");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			if (TMS_Main.D_Accounts.size()) {
				vID = 0;
				if (dID > 0) {
					dID--;
					while (TMS_Main.D_Accounts[dID]->getFreedom()) {
						dID--;
					}
					if (!HideVcl) {
						std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating());
						System::String^ st = gcnew String(str.data());
						richTextBox1->Text = (st);
					}
					else {
						if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
							std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " Vehicle (" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + ")\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
							System::String^ st = gcnew String(str.data());
							richTextBox1->Text = (st);
						}
						else {
							std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n\nThis Driver has no vehicles yet";
							System::String^ st = gcnew String(str.data());
							richTextBox1->Text = (st);
						}
					}
				}
			}
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				if (oID > 0) {
					oID--;
				}
				while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID > 0) {
					oID--;
				}
				if (oID <= 0 && TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID()) {
					while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID < TMS_Main.Orders.size() - 1) {
						oID++;
					}
				}
				if (TMS_Main.Orders.size()) {
					int s = TMS_Main.Orders[oID]->getPlaced(), h, m;
					std::string AmPm = "AM";
					std::string s2;
					h = (s / 3600) % 24 + 5;
					if (TMS_Main.Orders[oID]->getAccepted()) s2 = "Accepted";
					else s2 = "Not Accepted";
					if (h > 12) {
						h %= 12;
						AmPm = "PM";
					}
					s %= 3600;
					m = s / 60;
					s /= 60;
					std::string str = "Order for a " + TMS_Main.Orders[oID]->getType() + ", Placed On " + IntToString(h) + ":";
					if (m < 10) str = str + "0";
					str = str + IntToString(m) + AmPm + "\nDriver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nStatus: " + s2;
					System::String^ st2 = gcnew String(str.data());
					this->richTextBox1->Text = (st2);
				}
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			msclr::interop::marshal_context context;
			System::String^ s1 = Convert::ToString(textBox1->Text);
			std::string s2 = context.marshal_as<std::string>(s1);
			if (!(isInt(s2))) {
				MessageBox::Show("Please enter a valid Number", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			}
			else {
				TMS_Main.C_Accounts[i]->addbal(StringToInt(s2));
				std::string s3 = "Balance: PKR " + IntToString(TMS_Main.C_Accounts[i]->getbal());
				String^ balance = gcnew String(s3.data());
				this->label2->Text = (balance);
				TMS_Main.SaveLoadedData();
			}
		}
		if (this->radioButton4->Checked) {
			msclr::interop::marshal_context context;
			System::String^ s1 = Convert::ToString(textBox1->Text);
			std::string s2 = context.marshal_as<std::string>(s1);
			if (s2 == TMS_Main.C_Accounts[i]->getPass()) {
				if (MessageBox::Show("Are you sure you want to delete your account?\nIt cannot be recovered once deleted", "Confirm Account Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
					TMS_Main.DeleteCAccount(i);
					MessageBox::Show("Account Deleted, Application will close now so you may Log-In with or Create another account", "Account Deletion Succesful", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->Close();
				}
			}
			else {
				MessageBox::Show("Incorrect Password Entered", "Error: Incorrect Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			}
		}
		if (this->radioButton2->Checked) {
			if (!HideVcl) {
				this->button2->Text = ("Hide Vehicles");
				vID = 0;
				this->button5->Show();
				this->button6->Show();
				this->button11->Show();
				if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
					std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + "\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
					System::String^ st = gcnew String(str.data());
					richTextBox1->Text = (st);
				}
				else {
					std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n\nThis Driver has no vehicles yet";
					System::String^ st = gcnew String(str.data());
					richTextBox1->Text = (st);
				}
			}
			else {
				this->button2->Text = ("Show Vehicles");
				this->button5->Hide();
				this->button6->Hide();
				this->button11->Hide();
				std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating());
				System::String^ st = gcnew String(str.data());
				richTextBox1->Text = (st);
			}
			HideVcl = !HideVcl;
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				std::string str = "Are you sure you want to cancel your order for a  " + TMS_Main.Orders[oID]->getType() + " with " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "'s " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nYou will Recieve only PKR " + IntToString(TMS_Main.Orders[oID]->getCost() * 0.95) + " back";
				System::String^ st2 = gcnew String(str.data());
				if (MessageBox::Show(st2, "Confirm Order Cancellation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					TMS_Main.C_Accounts[i]->addbal(TMS_Main.Orders[oID]->getCost() * 0.95);
					std::string s3 = "Balance: PKR " + IntToString(TMS_Main.C_Accounts[i]->getbal());
					System::String^ balance = gcnew String(s3.data());
					this->label2->Text = (balance);
					TMS_Main.CancelOrder(oID);
					oID = 0;
					this->richTextBox1->Text = ("\nYou have not placed any orders yet");
					if (TMS_Main.Orders.size()) {
						while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID < TMS_Main.Orders.size() - 1) {
							oID++;
						}
						int s = TMS_Main.Orders[oID]->getPlaced(), h, m;
						std::string AmPm = "AM";
						h = (s / 3600) % 24 + 5;
						if (h > 12) {
							h %= 12;
							AmPm = "PM";
						}
						s %= 3600;
						m = s / 60;
						s /= 60;
						std::string str = "Order for a " + TMS_Main.Orders[oID]->getType() + ", Placed On " + IntToString(h) + ":";
						if (m < 10) str = str + "0";
						str = str + IntToString(m) + AmPm + "\nDriver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year);
						if (TMS_Main.C_Accounts[i]->getID() == TMS_Main.Orders[oID]->getCID()) {
							System::String^ st2 = gcnew String(str.data());
							this->richTextBox1->Text = (st2);
						}
					}
				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
				if (!HideVcl) {
					MessageBox::Show("You have not selected a vehicle, please click on \"Show Vehicles\" and select a vehicle", "Error: No Vehicle Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
				else {
					std::string s1;
					if (this->checkBox1->Checked) {
						s1 = "Ride";
						if (TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType != "Ride") {
							MessageBox::Show("You cannot request a Ride on a vehicle reserved for Deliveries", "Error: Incorrect Vehicle Selected", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							return;
						}
					}
					else {
						s1 = "Delivery";
						if (TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType != "Delivery") {
							MessageBox::Show("You cannot request a Delivery on a vehicle reserved for Rides", "Error: Incorrect Vehicle Selected", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							return;
						}
					}
					int distance = disx;
					int cost = distance * price;
					if (cost == 0) {
						MessageBox::Show("Arrival and Departure cannot be at the same location", "Error: Invalid Locations", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						return;
					}
					if (s1 == "Ride") cost = cost + (cost * 0.2);
					std::string str = "Are you sure you want to plave an order for a  " + s1 + " with " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "'s " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + "\nThis Order will cost you PKR " + IntToString(cost) + "\n\nOnce placed, the order can be cancelled with only 95% return of order cost";
					System::String^ st2 = gcnew String(str.data());
					if (MessageBox::Show(st2, "Confirm Order Placement", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
						if (TMS_Main.C_Accounts[i]->getbal() >= cost) {
							TMS_Main.MakeOrder(*TMS_Main.C_Accounts[i], *TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.D_Accounts[dID]->getID())], *TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.D_Accounts[dID]->getID())]->Vehicles[TMS_Main.FindID(TMS_Main.D_Accounts[dID]->getID(), TMS_Main.D_Accounts[dID]->Vehicles[vID]->getID())], s1, cost);
							TMS_Main.Orders = TMS_Main.Orders;
							dID = 0;
							vID = 0;
							TMS_Main.C_Accounts[i]->deductbal(cost);
							std::string s3 = "Balance: PKR " + IntToString(TMS_Main.C_Accounts[i]->getbal());
							System::String^ balance = gcnew String(s3.data());
							this->label2->Text = (balance);
							if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
								std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + "\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
								System::String^ st = gcnew String(str.data());
								richTextBox1->Text = (st);
							}
							else {
								std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n\nThis Driver has no vehicles yet";
								System::String^ st = gcnew String(str.data());
								richTextBox1->Text = (st);
							}
						}
						else {
							MessageBox::Show("You do not have sufficent balance to place this order, Please deposit more balance before you continue", "Error: Insufficent Balance", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						}
					}
				}
			}
			else {
				MessageBox::Show("You cannot place an order with this driver as they do not own any vehicles", "Error: No Vehicles Found", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				if (TMS_Main.Orders[oID]->getAccepted()) {
					if (r1 != 6 && r2 != 6) {
						if (MessageBox::Show("By Confirming this order, you are confirming that the order has been completed\nThe current ratings selected in the \"Give Ratings\" menu will also be submitted\nAre you sure you want to confirm?", "Confirm Order Completion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
							TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->addbal(TMS_Main.Orders[oID]->getCost());
							TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->setFreedom(0);
							TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->scores.push_back(r1);
							TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->scores.push_back(r2);
							TMS_Main.CompleteOrder(oID);
							r1 = 6; r2 = 6;
						}
					}
					else {
						MessageBox::Show("Please Rate the Driver and the Vehicle", "Error: Rating Submission", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						return;
					}
				}
				else {
					MessageBox::Show("The driver has not accepted this order yet", "Error: Un-Accepted Order", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			vID = 0;
			if (dID < TMS_Main.D_Accounts.size() - 1) {
				dID++;
				while (TMS_Main.D_Accounts[dID]->getFreedom()) {
					dID++;
				}
				if (!HideVcl) {
					std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating());
					System::String^ st = gcnew String(str.data());
					richTextBox1->Text = (st);
				}
				else {
					if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
						std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " Vehicle (" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + ")\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
						System::String^ st = gcnew String(str.data());
						richTextBox1->Text = (st);
					}
					else {
						std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n\nThis Driver has no vehicles yet";
						System::String^ st = gcnew String(str.data());
						richTextBox1->Text = (st);
					}
				}
			}
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				if (oID < TMS_Main.Orders.size() - 1) {
					oID++;
				}
				while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID < TMS_Main.Orders.size() - 1) {
					oID++;
				}
				if (oID >= TMS_Main.Orders.size() - 1 && TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID()) {
					while (TMS_Main.C_Accounts[i]->getID() != TMS_Main.Orders[oID]->getCID() && oID > 0) {
						oID--;
					}
				}
				if (TMS_Main.Orders.size()) {
					int s = TMS_Main.Orders[oID]->getPlaced(), h, m;
					std::string AmPm = "AM";
					std::string s2;
					h = (s / 3600) % 24 + 5;
					if (h > 12) {
						h %= 12;
						AmPm = "PM";
					}
					s %= 3600;
					m = s / 60;
					s /= 60;
					if (TMS_Main.Orders[oID]->getAccepted()) s2 = "Accepted";
					else s2 = "Not Accepted";
					std::string str = "Order for a " + TMS_Main.Orders[oID]->getType() + ", Placed On " + IntToString(h) + ":";
					if (m < 10) str = str + "0";
					str = str + IntToString(m) + AmPm + "\nDriver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nStatus: " + s2;
					System::String^ st2 = gcnew String(str.data());
					this->richTextBox1->Text = (st2);
				}
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
			if (vID > 0) {
				vID--;
			}
			std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " Vehicle (" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + ")\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
			System::String^ st = gcnew String(str.data());
			richTextBox1->Text = (st);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TMS_Main.D_Accounts[dID]->Vehicles.size() > 0) {
			if (vID < TMS_Main.D_Accounts[dID]->Vehicles.size() - 1) {
				vID++;
			}
			std::string str = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nWork Experience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + "\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\n--------------------------------------------------------------------------\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->ServiceType + " Vehicle (" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Type + ")\n" + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model\nVehicle Rating: " + FloatToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->ComputeAndReturnRating());
			System::String^ st = gcnew String(str.data());
			richTextBox1->Text = (st);
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			Distance^ f2 = gcnew Distance();
			f2->Show();
		}
		if (this->radioButton3->Checked) {
			RatingGiver^ f2 = gcnew RatingGiver();
			f2->Show();
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.SortR();
		dID = 0;
		this->radioButton2->Checked = false;
		this->radioButton2->Checked = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.SortE();
		dID = 0;
		this->radioButton2->Checked = false;
		this->radioButton2->Checked = true;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TMS_Main.D_Accounts.size()) {
			std::ofstream Saver;
			Saver.open("Data/ServiceThread.txt");
			Saver << IntToString(dID);
			Driver_Service^ f2 = gcnew Driver_Service();
			f2->Show();
		}
		else {
			MessageBox::Show("There are no drivers signed up yet", "Error: No Drivers", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TMS_Main.D_Accounts.size()) {
			if (TMS_Main.D_Accounts[dID]->Vehicles.size()) {
				Vehicle_Service^ f2 = gcnew Vehicle_Service();
				f2->Show();
			}
			else {
				MessageBox::Show("Selected Driver has no Vehicles", "Error: No Vehicles", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		else {
			MessageBox::Show("There are no drivers signed up yet", "Error: No Drivers", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			this->checkBox2->Checked = false;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->checkBox1->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox2->Checked) {
			this->checkBox1->Checked = false;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->checkBox2->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void Customer_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TMS_Main.SaveLoadedData();
		Application::Exit();
	}
#pragma endregion
	};
#pragma endregion
}
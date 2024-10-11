#pragma once
#include "22F-3274_22F-3327_LogIn.h"
extern TMS TMS_Main;
using namespace std;
using namespace System;
using namespace System::Configuration;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Sign Up Form
	public ref class Signup_Form : public System::Windows::Forms::Form {
	public:
		Signup_Form(void) {
			InitializeComponent();
		}
	protected:
		~Signup_Form() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::ComponentModel::Container^ components;

#pragma region Component Code
		   void InitializeComponent(void) {
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(39, 35);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(217, 20);
			   this->textBox1->TabIndex = 0;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox1_TextChanged);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(39, 88);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(217, 20);
			   this->textBox2->TabIndex = 1;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox2_TextChanged);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(39, 144);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(217, 20);
			   this->textBox3->TabIndex = 2;
			   this->textBox3->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox3_TextChanged);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(35, 19);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(90, 19);
			   this->label1->TabIndex = 3;
			   this->label1->Text = L"First Name";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(35, 72);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(89, 19);
			   this->label2->TabIndex = 4;
			   this->label2->Text = L"Last Name";
			   this->label2->Click += gcnew System::EventHandler(this, &Signup_Form::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(35, 128);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(91, 19);
			   this->label3->TabIndex = 5;
			   this->label3->Text = L"Enter CNIC";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(35, 195);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(125, 19);
			   this->label4->TabIndex = 6;
			   this->label4->Text = L"Enter Password";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(35, 250);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(146, 19);
			   this->label5->TabIndex = 7;
			   this->label5->Text = L"Confirm Password";
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(39, 211);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->PasswordChar = '*';
			   this->textBox4->Size = System::Drawing::Size(217, 20);
			   this->textBox4->TabIndex = 8;
			   this->textBox4->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox4_TextChanged);
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(39, 266);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->PasswordChar = '*';
			   this->textBox5->Size = System::Drawing::Size(217, 20);
			   this->textBox5->TabIndex = 9;
			   this->textBox5->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox5_TextChanged);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(36, 55);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(0, 13);
			   this->label6->TabIndex = 10;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(36, 108);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(0, 13);
			   this->label7->TabIndex = 11;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(36, 167);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(0, 13);
			   this->label8->TabIndex = 12;
			   this->label8->Click += gcnew System::EventHandler(this, &Signup_Form::label8_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(36, 286);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(0, 13);
			   this->label9->TabIndex = 13;
			   this->label9->Click += gcnew System::EventHandler(this, &Signup_Form::label9_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Silver;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(12, 308);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(114, 23);
			   this->button1->TabIndex = 14;
			   this->button1->Text = L"Create Account";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Signup_Form::button1_Click);
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioButton1->Location = System::Drawing::Point(343, 20);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(120, 49);
			   this->radioButton1->TabIndex = 15;
			   this->radioButton1->Text = L"\nCustomer Account\n ";
			   this->radioButton1->UseVisualStyleBackColor = false;
			   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Signup_Form::radioButton1_CheckedChanged);
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioButton2->Location = System::Drawing::Point(469, 19);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(122, 49);
			   this->radioButton2->TabIndex = 16;
			   this->radioButton2->Text = L"\n   Driver Account  \n ";
			   this->radioButton2->UseVisualStyleBackColor = false;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Signup_Form::radioButton2_CheckedChanged);
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(343, 150);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(169, 20);
			   this->textBox6->TabIndex = 18;
			   this->textBox6->TextChanged += gcnew System::EventHandler(this, &Signup_Form::textBox6_TextChanged);
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(339, 109);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(235, 38);
			   this->label10->TabIndex = 19;
			   this->label10->Text = L"How much Years of\nWork Experience do you have";
			   this->label10->Click += gcnew System::EventHandler(this, &Signup_Form::label10_Click);
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(340, 173);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(0, 13);
			   this->label11->TabIndex = 20;
			   this->label11->Click += gcnew System::EventHandler(this, &Signup_Form::label11_Click);
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(39, 231);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(0, 13);
			   this->label12->TabIndex = 21;
			   // 
			   // Signup_Form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(603, 343);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->textBox6);
			   this->Controls->Add(this->radioButton2);
			   this->Controls->Add(this->radioButton1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"Signup_Form";
			   this->Text = L"Transport Manager+";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Signup_Form::Signup_Form_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Signup_Form::Signup_Form_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void Signup_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.LoadSavedData();
		this->radioButton1->Checked = true;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s = Convert::ToString(textBox1->Text);
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(s);
		if (!isValidName(name)) {
			this->label6->Text = ("Please enter a valid Name, Do not use Numbers or symbols");
		}
		else {
			this->label6->Text = ("");
		}
		if (ContainsSpaces(name)) {
			this->label6->Text = ("Please do not use spaces");
		}
		else {
			this->label6->Text = ("");
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s = Convert::ToString(textBox2->Text);
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(s);
		if (!isValidName(name)) {
			this->label7->Text = ("Please enter a valid Name, Do not use Numbers or symbols");
		}
		else {
			this->label7->Text = ("");
		}
		if (ContainsSpaces(name)) {
			this->label7->Text = ("Please do not use spaces");
		}
		else {
			this->label7->Text = ("");
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s = Convert::ToString(textBox3->Text);
		msclr::interop::marshal_context context;
		std::string cnic = context.marshal_as<std::string>(s);
		if (!isValidCNIC(cnic)) {
			this->label8->Text = ("Please use the Proper Format for CNIC");
		}
		else {
			this->label8->Text = ("");
		}
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s1 = Convert::ToString(textBox4->Text);
		msclr::interop::marshal_context context;
		std::string pass = context.marshal_as<std::string>(s1);
		if (ContainsSpaces(pass)) {
			this->label12->Text = ("Please do not use spaces");
		}
		else {
			this->label12->Text = ("");
		}
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s1 = Convert::ToString(textBox4->Text);
		msclr::interop::marshal_context context;
		System::String^ s2 = Convert::ToString(textBox5->Text);
		std::string pass2 = context.marshal_as<std::string>(s1);
		std::string pass1 = context.marshal_as<std::string>(s2);
		if (s1 != s2) {
			this->label9->Text = ("Passwords do not match");
		}
		else {
			this->label9->Text = ("");
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			this->radioButton2->Checked = false;
		}
		if (this->radioButton1->Checked) {
			this->radioButton2->Location = System::Drawing::Point(268, 237);
			this->radioButton1->Location = System::Drawing::Point(270, 182);
			this->ClientSize = System::Drawing::Size(402, 343);
			this->label10->Hide();
			this->textBox6->Hide();
			this->label11->Hide();
		}
		else {
			this->radioButton2->Location = System::Drawing::Point(469, 19);
			this->radioButton1->Location = System::Drawing::Point(343, 20);
			this->ClientSize = System::Drawing::Size(603, 343);
			this->label10->Show();
			this->textBox6->Show();
			this->label11->Show();
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			this->radioButton1->Checked = false;
		}
		if (this->radioButton2->Checked) {
			this->radioButton2->Location = System::Drawing::Point(469, 19);
			this->radioButton1->Location = System::Drawing::Point(343, 20);
			this->ClientSize = System::Drawing::Size(603, 343);
			this->label10->Show();
			this->textBox6->Show();
			this->label11->Show();
		}
		else {
			this->radioButton2->Location = System::Drawing::Point(268, 237);
			this->radioButton1->Location = System::Drawing::Point(270, 182);
			this->ClientSize = System::Drawing::Size(402, 343);
			this->label10->Hide();
			this->textBox6->Hide();
			this->label11->Hide();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1;
		std::string std1, std2, std3, std4, std5, std6;

		s1 = Convert::ToString(textBox1->Text);
		std1 = context.marshal_as<std::string>(s1);

		s1 = Convert::ToString(textBox2->Text);
		std2 = context.marshal_as<std::string>(s1);

		s1 = Convert::ToString(textBox3->Text);
		std3 = context.marshal_as<std::string>(s1);

		s1 = Convert::ToString(textBox4->Text);
		std4 = context.marshal_as<std::string>(s1);

		s1 = Convert::ToString(textBox5->Text);
		std5 = context.marshal_as<std::string>(s1);

		s1 = Convert::ToString(textBox6->Text);
		std6 = context.marshal_as<std::string>(s1);

		if (ContainsSpaces(std1)) {
			MessageBox::Show("Please do not use any spaces in the First Name field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (ContainsSpaces(std2)) {
			MessageBox::Show("Please do not use any spaces in the Last Name field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (ContainsSpaces(std3)) {
			MessageBox::Show("Please do not use any spaces in the CNIC field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (ContainsSpaces(std4)) {
			MessageBox::Show("Please do not use any spaces in the Password field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (isNull(std1)) {
			MessageBox::Show("Missing Information in First Name Field", "Error: Missing Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		else {
			if (!(isValidName(std1))) {
				MessageBox::Show("Information Entered in the First Name Field is Invalid", "Error: Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
		}
		if (isNull(std2)) {
			MessageBox::Show("Missing Information in Last Name Field", "Error: Missing Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		else {
			if (!(isValidName(std2))) {
				MessageBox::Show("Information Entered in the Last Name Field is Invalid", "Error: Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
		}
		if (isNull(std3)) {
			MessageBox::Show("Missing Information in CNIC Field", "Error: Missing Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		else {
			if (!(isValidCNIC(std3))) {
				MessageBox::Show("Information Entered in the CNIC Field is Invalid", "Error: Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
			else {
				if (!(TMS_Main.isUniqueCNIC(std3))) {
					MessageBox::Show("Entered CNIC is already in use by another account", "Error: Repeated Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
					return;
				}
			}
		}
		if (isNull(std4)) {
			MessageBox::Show("Please choose a password for your account", "Error: Missing Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (isNull(std5)) {
			MessageBox::Show("Please confirm your password", "Error: Missing Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		for (int i = 0; i < std4.size(); i++) {
			if (std4[i] == ' ') {
				MessageBox::Show("You cannot use spaces in the password\nPlease re-enter the password without spaces ( use - or _ instead )", "Error: Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
		}
		if (std4 != std5) {
			MessageBox::Show("Entered Password and Confirmed Password does not match", "Error: Incorrect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (this->radioButton2->Checked) {
			if (isNull(std6)) {
				MessageBox::Show("Missing Information in Work Experience Field", "Error: Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
			else {
				if (!(isInt(std6))) {
					MessageBox::Show("Information Entered in the Work Experience Field is Invalid", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
					return;
				}
			}
		}
		if (this->radioButton2->Checked) {
			Driver temp(std1, std2, std3, std4, 0, StringToInt(std6), 0);
			TMS_Main.D_Accounts.push_back(temp);
		}
		else {
			Customer temp(std1, std2, std3, std4, 0);
			TMS_Main.C_Accounts.push_back(temp);
		}
		TMS_Main.SaveLoadedData();
		MessageBox::Show("Account Created Succesfully, Please close the application to login with your new account", "Error: Account Creation Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1 = Convert::ToString(textBox6->Text);
		std::string s2;
		s2 = context.marshal_as<std::string>(s1);
		if (!(isInt(s2))) {
			this->label11->Text = ("Please Enter a Valid Number");
		}
		else {
			this->label11->Text = ("");
		}
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Signup_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TMS_Main.SaveLoadedData();
		Application::Exit();
	}
#pragma endregion
	};
#pragma endregion
}
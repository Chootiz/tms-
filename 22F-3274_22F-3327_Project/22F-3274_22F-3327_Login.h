#pragma once
#include "22F-3274_22F-3327_SignUp.h"
#include "22F-3274_22F-3327_Customer_Form.h"
#include "22F-3274_22F-3327_Driver_Form.h"
#include "22F-3274_22F-3327_Admin_Form.h"
extern TMS TMS_Main;
using namespace std;
using namespace System;
using namespace System::Configuration;
namespace TMS_Forms {
	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Login Form
	public ref class Login_Form : public System::Windows::Forms::Form {
	public:
		Login_Form(void) {
			InitializeComponent();
		}

	protected:
		~Login_Form() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::Container^ components;
#pragma region Component Code

		   void InitializeComponent(void) {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(58, 14);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(91, 19);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Enter CNIC";
			   this->label1->Click += gcnew System::EventHandler(this, &Login_Form::label1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(61, 31);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(162, 20);
			   this->textBox1->TabIndex = 1;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Silver;
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(12, 139);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 2;
			   this->button1->Text = L"Proceed";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Login_Form::button1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(34, 54);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(222, 16);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"(Please use the Format 12345-1234567-9)";
			   this->label2->Click += gcnew System::EventHandler(this, &Login_Form::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(57, 80);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(125, 19);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Enter Password";
			   this->label3->Click += gcnew System::EventHandler(this, &Login_Form::label3_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(61, 99);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->PasswordChar = '*';
			   this->textBox2->Size = System::Drawing::Size(162, 20);
			   this->textBox2->TabIndex = 5;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login_Form::textBox2_TextChanged);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Silver;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(169, 139);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(103, 23);
			   this->button2->TabIndex = 6;
			   this->button2->Text = L"Create Account";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Login_Form::button2_Click);
			   // 
			   // Login_Form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(284, 174);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			   this->Name = L"Login_Form";
			   this->Text = L"Transport Manager+";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Login_Form::Login_Form_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Login_Form::Login_Form_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void Login_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		FloatToString(421.123456);
		TMS_Main.ClearLoadedData();
		TMS_Main.LoadSavedData();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s = Convert::ToString(textBox1->Text);
		System::String^ s2 = Convert::ToString(textBox2->Text);
		msclr::interop::marshal_context context;
		std::string cnic = context.marshal_as<std::string>(s);
		std::string pass = context.marshal_as<std::string>(s2);
		if (cnic == "admin lemme in" && pass == "i have the power") {
			Admin_Form^ f2 = gcnew Admin_Form();
			f2->Show();
			this->Hide();
		}
		else {
			if (isValidCNIC(cnic)) {
				if (!(TMS_Main.FindCNIC(cnic) + 1)) {
					if (!(TMS_Main.FindCNIC2(cnic) + 1)) {
						MessageBox::Show("Entered CNIC or Password is Incorrect, No account exists against given credentials Please create an account first", "Error: Incorrect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
					}
					else {
						if (pass == TMS_Main.D_Accounts[TMS_Main.FindCNIC2(cnic)]->getPass()) {
							std::ofstream CurrentAcc;
							CurrentAcc.open("Data/CurrentAcc.txt");
							CurrentAcc << "Driver " << TMS_Main.FindCNIC2(cnic);
							CurrentAcc.close();
							Driver_Form^ f2 = gcnew Driver_Form();
							f2->Show();
							this->Hide();
						}
						else {
							MessageBox::Show("Entered CNIC or Password is Incorrect", "Error: Incorrect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
						}
					}
				}
				else {
					if (pass == TMS_Main.C_Accounts[TMS_Main.FindCNIC(cnic)]->getPass()) {
						std::ofstream CurrentAcc;
						CurrentAcc.open("Data/CurrentAcc.txt");
						CurrentAcc << "Customer " << TMS_Main.FindCNIC(cnic);
						CurrentAcc.close();
						Customer_Form^ f2 = gcnew Customer_Form();
						f2->Show();
						this->Hide();
					}
					else {
						MessageBox::Show("Entered CNIC or Password is Incorrect", "Error: Incorrect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Hand);
					}
				}
			}
			else {
				MessageBox::Show("Please use the proper Format (12345-1234567-9)", "Error: Invalid CNIC", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			}
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TMS_Main.SaveLoadedData();
		TMS_Main.ClearLoadedData();
		Signup_Form^ f2 = gcnew Signup_Form();
		f2->Show();
	}
	private: System::Void Login_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TMS_Main.SaveLoadedData();
		Application::Exit();
	}
#pragma endregion
	};
#pragma endregion
}
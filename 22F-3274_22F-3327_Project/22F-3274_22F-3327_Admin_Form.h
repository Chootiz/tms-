#pragma once
extern TMS TMS_Main;
extern int dID, oID;
int cID;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Admin_Form : public System::Windows::Forms::Form {
	public:
		Admin_Form(void) {
			InitializeComponent();
		}
	protected:
		~Admin_Form() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::ComponentModel::Container^ components;
#pragma region Component Code
		   void InitializeComponent(void) {
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton1->Location = System::Drawing::Point(11, 155);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(135, 75);
			   this->radioButton1->TabIndex = 0;
			   this->radioButton1->Text = L"\n\nView Customer Accounts\n\n ";
			   this->radioButton1->UseVisualStyleBackColor = true;
			   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Admin_Form::radioButton1_CheckedChanged);
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton2->Location = System::Drawing::Point(10, 236);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(134, 75);
			   this->radioButton2->TabIndex = 1;
			   this->radioButton2->Text = L"\n\n   View Driver Accounts  \n\n ";
			   this->radioButton2->UseVisualStyleBackColor = true;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Admin_Form::radioButton2_CheckedChanged);
			   // 
			   // radioButton3
			   // 
			   this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton3->AutoSize = true;
			   this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton3->Location = System::Drawing::Point(10, 317);
			   this->radioButton3->Name = L"radioButton3";
			   this->radioButton3->Size = System::Drawing::Size(135, 75);
			   this->radioButton3->TabIndex = 2;
			   this->radioButton3->Text = L"\n\n    View Current Orders    \n\n ";
			   this->radioButton3->UseVisualStyleBackColor = true;
			   this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Admin_Form::radioButton3_CheckedChanged);
			   // 
			   // radioButton4
			   // 
			   this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton4->AutoSize = true;
			   this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton4->Location = System::Drawing::Point(11, 398);
			   this->radioButton4->Name = L"radioButton4";
			   this->radioButton4->Size = System::Drawing::Size(134, 75);
			   this->radioButton4->TabIndex = 3;
			   this->radioButton4->Text = L"\n\n      View Past Orders      \n\n ";
			   this->radioButton4->UseVisualStyleBackColor = true;
			   this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Admin_Form::radioButton4_CheckedChanged);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(292, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(368, 56);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"Admin Dashboard";
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::SystemColors::Menu;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox1->Location = System::Drawing::Point(221, 125);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->ReadOnly = true;
			   this->richTextBox1->Size = System::Drawing::Size(439, 213);
			   this->richTextBox1->TabIndex = 5;
			   this->richTextBox1->Text = L"";
			   // 
			   // button1
			   // 
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(221, 344);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(215, 48);
			   this->button1->TabIndex = 6;
			   this->button1->Text = L"<";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Admin_Form::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(445, 344);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(215, 48);
			   this->button2->TabIndex = 7;
			   this->button2->Text = L">";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Admin_Form::button2_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(685, 140);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(192, 20);
			   this->textBox1->TabIndex = 8;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &Admin_Form::textBox1_TextChanged);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(685, 210);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(192, 20);
			   this->textBox2->TabIndex = 9;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &Admin_Form::textBox2_TextChanged);
			   // 
			   // button3
			   // 
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button3->Location = System::Drawing::Point(883, 140);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 20);
			   this->button3->TabIndex = 10;
			   this->button3->Text = L"Add";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Admin_Form::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button4->Location = System::Drawing::Point(883, 210);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(75, 20);
			   this->button4->TabIndex = 11;
			   this->button4->Text = L"Remove";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &Admin_Form::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(685, 282);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(150, 49);
			   this->button5->TabIndex = 12;
			   this->button5->Text = L"Delete Account";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Admin_Form::button5_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(685, 121);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(85, 18);
			   this->label2->TabIndex = 13;
			   this->label2->Text = L"Add Balance";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(685, 191);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(109, 18);
			   this->label3->TabIndex = 14;
			   this->label3->Text = L"Remove Balance";
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(685, 337);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(109, 23);
			   this->button6->TabIndex = 15;
			   this->button6->Text = L"Sort by Rating";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &Admin_Form::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->Location = System::Drawing::Point(685, 366);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(109, 23);
			   this->button7->TabIndex = 16;
			   this->button7->Text = L"Sort by Experience";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &Admin_Form::button7_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(685, 160);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(0, 13);
			   this->label4->TabIndex = 17;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(685, 230);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(0, 13);
			   this->label5->TabIndex = 18;
			   // 
			   // Admin_Form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1000, 485);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->radioButton4);
			   this->Controls->Add(this->radioButton3);
			   this->Controls->Add(this->radioButton2);
			   this->Controls->Add(this->radioButton1);
			   this->Name = L"Admin_Form";
			   this->Text = L"Transport Manager";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Admin_Form::Admin_Form_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Admin_Form::Admin_Form_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void Admin_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.LoadSavedData();
		oID = 0;
		cID = 0;
		dID = 0;
		this->radioButton1->Checked = true;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->button1->Show();
			this->button2->Show();
			this->button6->Hide();
			this->button7->Hide();
			this->richTextBox1->Text = "No customers have signed up yet";
			this->ClientSize = System::Drawing::Size(1000, 485);
			cID = 0;
			if (TMS_Main.C_Accounts.size()) {
				std::string s1 = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
			this->radioButton1->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton1->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			this->radioButton1->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->button1->Show();
			this->button2->Show();
			this->button6->Show();
			this->button7->Show();
			this->richTextBox1->Text = "No drivers have signed up yet";
			this->ClientSize = System::Drawing::Size(1000, 485);
			this->radioButton2->BackColor = System::Drawing::SystemColors::ControlDark;
			if (TMS_Main.D_Accounts.size()) {
				std::string s1 = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
		else {
			this->radioButton2->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton3->Checked) {
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton4->Checked = false;
			this->button1->Show();
			this->button2->Show();
			this->richTextBox1->Text = "\nNo Orders placed yet";
			if (TMS_Main.Orders.size()) {
				std::string s1 = "Order for a " + TMS_Main.Orders[oID]->getType() + "\nPlaced by: " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nSelected Driver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: " + IntToString(TMS_Main.Orders[oID]->getCost());
				if (TMS_Main.Orders[oID]->getAccepted()) s1 = s1 + "\n\nAccepted";
				else s1 = s1 + "\n\nNot Accepted Yet";
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
			this->ClientSize = System::Drawing::Size(685, 485);
			this->radioButton3->BackColor = System::Drawing::SystemColors::ControlDark;
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
			this->richTextBox1->Text = "";
			this->button1->Hide();
			this->button2->Hide();
			this->ClientSize = System::Drawing::Size(685, 485);
			this->radioButton4->BackColor = System::Drawing::SystemColors::ControlDark;
			std::ifstream Ordar;
			std::string str = "", st2;
			Ordar.open("Data/All Orders.txt");
			while (getline(Ordar, st2)) {
				for (int i = 0; i < st2.length(); i++) {
					if (st2[i] == '%') {
						st2[i] = '\n';
					}
				}
				if (st2 != "") {
					str = str + st2 + "\n----------------------------------------------------\n";
				}
			}
			System::String^ s3 = gcnew String(str.data());
			this->richTextBox1->Text = (s3);
		}
		else {
			this->radioButton4->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			if (TMS_Main.C_Accounts.size()) {
				if (cID > 0) {
					cID--;
				}
				std::string s1 = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
		if (this->radioButton2->Checked) {
			if (TMS_Main.D_Accounts.size()) {
				if (dID > 0) {
					dID--;
				}
				std::string s1 = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				if (oID > 0) {
					oID--;
				}
				std::string s1 = "Order for a " + TMS_Main.Orders[oID]->getType() + "\nPlaced by: " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nSelected Driver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: " + IntToString(TMS_Main.Orders[oID]->getCost());
				if (TMS_Main.Orders[oID]->getAccepted()) s1 = s1 + "\n\nAccepted";
				else s1 = s1 + "\n\nNot Accepted Yet";
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			if (TMS_Main.C_Accounts.size()) {
				if (cID < TMS_Main.C_Accounts.size() - 1) {
					cID++;
				}
				std::string s1 = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
		if (this->radioButton2->Checked) {
			if (TMS_Main.D_Accounts.size()) {
				if (dID < TMS_Main.D_Accounts.size() - 1) {
					dID++;
				}
				std::string s1 = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
		if (this->radioButton3->Checked) {
			if (TMS_Main.Orders.size()) {
				if (oID < TMS_Main.Orders.size() - 1) {
					oID++;
				}
				std::string s1 = "Order for a " + TMS_Main.Orders[oID]->getType() + "\nPlaced by: " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nSelected Driver: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getFName() + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->getLName() + "\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: " + IntToString(TMS_Main.Orders[oID]->getCost());
				if (TMS_Main.Orders[oID]->getAccepted()) s1 = s1 + "\n\nAccepted";
				else s1 = s1 + "\n\nNot Accepted Yet";
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = (s2);
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			System::String^ s = Convert::ToString(textBox1->Text);
			msclr::interop::marshal_context context;
			std::string num = context.marshal_as<std::string>(s);
			if (!isInt(num)) {
				MessageBox::Show("Please enter a number in the input field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			TMS_Main.C_Accounts[cID]->addbal(StringToInt(num));
			num = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
			s = gcnew String(num.data());
			this->richTextBox1->Text = (s);
		}
		if (this->radioButton2->Checked) {
			System::String^ s = Convert::ToString(textBox1->Text);
			msclr::interop::marshal_context context;
			std::string num = context.marshal_as<std::string>(s);
			if (!isInt(num)) {
				MessageBox::Show("Please enter a number in the input field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.D_Accounts[dID]->getID())]->addbal(StringToInt(num));
			TMS_Main.D_Accounts[dID]->addbal(StringToInt(num));
			num = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
			s = gcnew String(num.data());
			this->richTextBox1->Text = (s);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			System::String^ s = Convert::ToString(textBox2->Text);
			msclr::interop::marshal_context context;
			std::string num = context.marshal_as<std::string>(s);
			if (!isInt(num)) {
				MessageBox::Show("Please enter a number in the input field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			if (StringToInt(num) > TMS_Main.C_Accounts[cID]->getbal()) {
				MessageBox::Show("The customer has insufficent balance for this deduction", "Error: Insufficent Balance", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			TMS_Main.C_Accounts[cID]->deductbal(StringToInt(num));
			num = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
			s = gcnew String(num.data());
			this->richTextBox1->Text = (s);
		}
		if (this->radioButton2->Checked) {
			System::String^ s = Convert::ToString(textBox2->Text);
			msclr::interop::marshal_context context;
			std::string num = context.marshal_as<std::string>(s);
			if (!isInt(num)) {
				MessageBox::Show("Please enter a number in the input field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			if (StringToInt(num) > TMS_Main.D_Accounts[dID]->getbal()) {
				MessageBox::Show("The driver has insufficent balance for this deduction", "Error: Insufficent Balance", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}
			TMS_Main.D_Accounts[dID]->deductbal(StringToInt(num));
			num = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
			s = gcnew String(num.data());
			this->richTextBox1->Text = (s);
		}
	}
	private: System::Void Admin_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TMS_Main.SaveLoadedData();
		Application::Exit();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			if (MessageBox::Show("Are you sure you want to delete this Customers account?\nOnce deleted all the orders this customer placed will be automatically cancelled", "Confirm Account Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				TMS_Main.DeleteCAccount(cID);
				cID = 0;
				this->richTextBox1->Text = "No customers have signed up yet";
				if (TMS_Main.C_Accounts.size()) {
					std::string s1 = "Name: " + TMS_Main.C_Accounts[cID]->getFName() + " " + TMS_Main.C_Accounts[cID]->getLName() + "\nCNIC: " + TMS_Main.C_Accounts[cID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.C_Accounts[cID]->getbal()) + "\n\nPassword: " + TMS_Main.C_Accounts[cID]->getPass();
					System::String^ s2 = gcnew String(s1.data());
					this->richTextBox1->Text = (s2);
				}
			}
		}
		if (this->radioButton2->Checked) {
			if (MessageBox::Show("Are you sure you want to delete this Drivers account?\nOnce deleted all the orders placed on this driver will be automatically rejected", "Confirm Account Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				TMS_Main.DeleteDAccount(TMS_Main.FindCNIC2(TMS_Main.D_Accounts[dID]->getID()));
				dID = 0;
				this->richTextBox1->Text = "No drivers have signed up yet";
				if (TMS_Main.D_Accounts.size()) {
					std::string s1 = "Name: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName() + "\nCNIC: " + TMS_Main.D_Accounts[dID]->getID() + "\nBalance: PKR " + IntToString(TMS_Main.D_Accounts[dID]->getbal()) + "\nNo. of Vehicles: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles.size()) + "\nExperience: " + IntToString(TMS_Main.D_Accounts[dID]->getExp()) + " Years\nRating: " + FloatToString(TMS_Main.D_Accounts[dID]->ComputeAndReturnRating()) + "\nPassword: " + TMS_Main.D_Accounts[dID]->getPass();
					System::String^ s2 = gcnew String(s1.data());
					this->richTextBox1->Text = (s2);
				}
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.SortR();
		dID = 0;
		this->radioButton2->Checked = false;
		this->radioButton2->Checked = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.SortE();
		dID = 0;
		this->radioButton2->Checked = false;
		this->radioButton2->Checked = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1 = gcnew String(this->textBox1->Text);
		std::string s2 = context.marshal_as<std::string>(s1);
		if (!isInt(s2)) {
			this->label4->Text = "Please enter a number.";
		}
		else {
			this->label4->Text = "";
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1 = gcnew String(this->textBox2->Text);
		std::string s2 = context.marshal_as<std::string>(s1);
		if (!isInt(s2)) {
			this->label5->Text = "Please enter a number.";
		}
		else {
			this->label5->Text = "";
		}
	}
	};
}
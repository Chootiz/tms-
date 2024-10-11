#pragma once
extern TMS TMS_Main;
extern int dID;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Driver_Service
	/// </summary>
	public ref class Driver_Service : public System::Windows::Forms::Form {
	public:
		Driver_Service(void) {
			InitializeComponent();
		}
	protected:
		~Driver_Service() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold));
			this->richTextBox1->Location = System::Drawing::Point(12, 147);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(526, 323);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 36, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(54, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(442, 56);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Driver Service History";
			// 
			// Driver_Service
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 482);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Driver_Service";
			this->Text = L"Driver_Service";
			this->Load += gcnew System::EventHandler(this, &Driver_Service::Driver_Service_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Driver_Service_Load(System::Object^ sender, System::EventArgs^ e) {
		int c = 0;
		std::string s1, s2, s3, s4, txt;
		std::ifstream Loader;
		String^ name, ^ balance, ^ cnic, ^ rating;
		s1 = TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName();
		name = gcnew String(s1.data());
		s1 = TMS_Main.D_Accounts[dID]->getID();
		cnic = gcnew String(s1.data());
		this->label1->Text = name;
		this->label2->Text = cnic;
		std::ifstream Services;
		Services.open("Data/Past_Services.txt");
		this->richTextBox1->Text = "\n\nThis Driver has no past services";
		while (!Services.eof()) {
			s1 = " ";
			s2 = " ";
			s3 = " ";
			s4 = " ";
			Services >> s1 >> s2 >> s3 >> s4;
			if (s2 == TMS_Main.D_Accounts[dID]->getID()) {
				c++;
				for (int i = 0; i < s4.length(); i++) {
					if (s4[i] == '%') s4[i] = '\n';
					if (s4[i] == '*') s4[i] = ' ';
				}
				txt = txt + "Order for a " + s1 + "\n" + s4 + "\n-----------------------------------------------------------------\n";
			}
		}
		for (int i = 0; i < TMS_Main.Orders.size(); i++) {
			if (TMS_Main.Orders[i]->getDID() == TMS_Main.D_Accounts[dID]->getID() && !TMS_Main.Orders[i]->getAccepted()) {
				txt = txt + "Order for a " + TMS_Main.Orders[i]->getType() + "\nRequested by: " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[i]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[i]->getCID())]->getLName() + "\nOrder Status: Not Accepted\n-----------------------------------------------------------------\n";
				c++;
			}
		}
		if (c > 0) {
			name = gcnew String(txt.data());
			this->richTextBox1->Text = name;
		}
	}
	};
}
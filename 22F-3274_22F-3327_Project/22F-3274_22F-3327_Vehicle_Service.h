#pragma once
extern TMS TMS_Main;
extern int dID, vID;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Vehicle_Service
	/// </summary>
	public ref class Vehicle_Service : public System::Windows::Forms::Form
	{
	public:
		Vehicle_Service(void)
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
		~Vehicle_Service()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold));
			this->richTextBox1->Location = System::Drawing::Point(12, 161);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(526, 323);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(291, 101);
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
			this->label2->Location = System::Drawing::Point(292, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 36, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(41, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(467, 56);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Vehicle Service History";
			this->label3->Click += gcnew System::EventHandler(this, &Vehicle_Service::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(7, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(8, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 22);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// Vehicle_Service
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 497);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Vehicle_Service";
			this->Text = L"Vehicle_Service";
			this->Load += gcnew System::EventHandler(this, &Vehicle_Service::Vehicle_Service_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Vehicle_Service_Load(System::Object^ sender, System::EventArgs^ e) {
		int c = 0;
		std::string s1, s2, s3, s4, txt;
		std::ifstream Loader;
		String^ name, ^ vehicle, ^ cnic, ^ lcplt;
		s1 = "Owner: " + TMS_Main.D_Accounts[dID]->getFName() + " " + TMS_Main.D_Accounts[dID]->getLName();
		name = gcnew String(s1.data());
		s1 = TMS_Main.D_Accounts[dID]->getID();
		cnic = gcnew String(s1.data());
		s1 = TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->Model.Year) + " Model";
		vehicle = gcnew String(s1.data());
		s1 = "Lisnece Plate Number: " + IntToString(TMS_Main.D_Accounts[dID]->Vehicles[vID]->getID());
		lcplt = gcnew String(s1.data());
		this->label1->Text = name;
		this->label2->Text = cnic;
		this->label4->Text = vehicle;
		this->label5->Text = lcplt;
		std::ifstream Services;
		Services.open("Data/Past_Services.txt");
		this->richTextBox1->Text = "\n\nThis Vehicle has no past services";
		while (!Services.eof()) {
			s1 = " ";
			s2 = " ";
			s3 = " ";
			s4 = " ";
			Services >> s1 >> s2 >> s3 >> s4;
			if (s2 == TMS_Main.D_Accounts[dID]->getID() && TMS_Main.D_Accounts[dID]->Vehicles[vID]->getID() == StringToInt(s3)) {
				c++;
				for (int i = 0; i < s4.length(); i++) {
					if (s4[i] == '%') s4[i] = '\n';
					if (s4[i] == '*') s4[i] = ' ';
				}
				txt = txt + "Order for a " + s1 + "\n" + s4 + "\n-----------------------------------------------------------------\n";
			}
		}
		for (int i = 0; i < TMS_Main.Orders.size(); i++) {
			if (TMS_Main.Orders[i]->getDID() == TMS_Main.D_Accounts[dID]->getID() && TMS_Main.D_Accounts[dID]->Vehicles[vID]->getID() == TMS_Main.Orders[i]->getVID() && !TMS_Main.Orders[i]->getAccepted()) {
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

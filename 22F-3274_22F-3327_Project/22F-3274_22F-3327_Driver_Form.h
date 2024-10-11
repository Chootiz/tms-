#pragma once
extern TMS TMS_Main;
extern int oID = 0, vID = 0;
namespace TMS_Forms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Driver Form
	public ref class Driver_Form : public System::Windows::Forms::Form {
	public:
		Driver_Form(void) {
			InitializeComponent();
		}

	protected:
		~Driver_Form() {
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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private: System::ComponentModel::Container^ components;
#pragma region Component Code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Driver_Form::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
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
			   this->label1->Click += gcnew System::EventHandler(this, &Driver_Form::label1_Click);
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
			   this->label2->Click += gcnew System::EventHandler(this, &Driver_Form::label2_Click);
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
			   this->label3->Click += gcnew System::EventHandler(this, &Driver_Form::label3_Click);
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton1->Location = System::Drawing::Point(16, 131);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(100, 49);
			   this->radioButton1->TabIndex = 3;
			   this->radioButton1->TabStop = true;
			   this->radioButton1->Text = L"\nWithdraw Money \n ";
			   this->radioButton1->UseVisualStyleBackColor = false;
			   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::radioButton1_CheckedChanged);
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton2->Location = System::Drawing::Point(16, 186);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(101, 49);
			   this->radioButton2->TabIndex = 4;
			   this->radioButton2->TabStop = true;
			   this->radioButton2->Text = L"\n     View Orders    \n ";
			   this->radioButton2->UseVisualStyleBackColor = false;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::radioButton2_CheckedChanged);
			   // 
			   // radioButton3
			   // 
			   this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton3->AutoSize = true;
			   this->radioButton3->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton3->Location = System::Drawing::Point(16, 241);
			   this->radioButton3->Name = L"radioButton3";
			   this->radioButton3->Size = System::Drawing::Size(102, 49);
			   this->radioButton3->TabIndex = 5;
			   this->radioButton3->TabStop = true;
			   this->radioButton3->Text = L"\n       Vehicles        \n ";
			   this->radioButton3->UseVisualStyleBackColor = false;
			   this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::radioButton3_CheckedChanged);
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->richTextBox1->Location = System::Drawing::Point(211, 104);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(304, 131);
			   this->richTextBox1->TabIndex = 16;
			   this->richTextBox1->Text = L"";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(299, 48);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(52, 21);
			   this->label4->TabIndex = 7;
			   this->label4->Text = L"label4";
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
			   this->button1->Click += gcnew System::EventHandler(this, &Driver_Form::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Location = System::Drawing::Point(272, 241);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(89, 49);
			   this->button2->TabIndex = 11;
			   this->button2->Text = L"Reject Order";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Driver_Form::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button3->Location = System::Drawing::Point(367, 241);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(87, 49);
			   this->button3->TabIndex = 12;
			   this->button3->Text = L"Accept Order";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &Driver_Form::button3_Click);
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
			   this->button4->Click += gcnew System::EventHandler(this, &Driver_Form::button4_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(208, 114);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(0, 17);
			   this->label5->TabIndex = 8;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(211, 131);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(199, 20);
			   this->textBox1->TabIndex = 7;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &Driver_Form::textBox1_TextChanged);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(212, 151);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(10, 13);
			   this->label6->TabIndex = 9;
			   this->label6->Text = L" ";
			   // 
			   // radioButton4
			   // 
			   this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			   this->radioButton4->AutoSize = true;
			   this->radioButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->radioButton4->Location = System::Drawing::Point(16, 296);
			   this->radioButton4->Name = L"radioButton4";
			   this->radioButton4->Size = System::Drawing::Size(100, 49);
			   this->radioButton4->TabIndex = 17;
			   this->radioButton4->TabStop = true;
			   this->radioButton4->Text = L"\n  Delete Account \n ";
			   this->radioButton4->UseVisualStyleBackColor = false;
			   this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::radioButton4_CheckedChanged);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(623, 41);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(215, 20);
			   this->textBox2->TabIndex = 18;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &Driver_Form::textBox2_TextChanged);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(623, 111);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(215, 20);
			   this->textBox3->TabIndex = 19;
			   this->textBox3->TextChanged += gcnew System::EventHandler(this, &Driver_Form::textBox3_TextChanged);
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(623, 173);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(215, 20);
			   this->textBox4->TabIndex = 20;
			   this->textBox4->TextChanged += gcnew System::EventHandler(this, &Driver_Form::textBox4_TextChanged);
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(623, 236);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(215, 20);
			   this->textBox5->TabIndex = 21;
			   this->textBox5->TextChanged += gcnew System::EventHandler(this, &Driver_Form::textBox5_TextChanged);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(619, 20);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(182, 21);
			   this->label7->TabIndex = 22;
			   this->label7->Text = L"Vehicle Brand/Company";
			   this->label7->Click += gcnew System::EventHandler(this, &Driver_Form::label7_Click);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(619, 90);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(54, 21);
			   this->label8->TabIndex = 23;
			   this->label8->Text = L"Model";
			   this->label8->Click += gcnew System::EventHandler(this, &Driver_Form::label8_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(619, 152);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(41, 21);
			   this->label9->TabIndex = 24;
			   this->label9->Text = L"Year";
			   this->label9->Click += gcnew System::EventHandler(this, &Driver_Form::label9_Click);
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(619, 215);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(129, 21);
			   this->label10->TabIndex = 25;
			   this->label10->Text = L"Lisence Plate No.";
			   this->label10->Click += gcnew System::EventHandler(this, &Driver_Form::label10_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(833, 297);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(75, 53);
			   this->button5->TabIndex = 28;
			   this->button5->Text = L"Add Vehicle";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Driver_Form::button5_Click);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox1->Location = System::Drawing::Point(623, 297);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(93, 23);
			   this->checkBox1->TabIndex = 29;
			   this->checkBox1->Text = L"Delivery Vehicle";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::checkBox1_CheckedChanged);
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox2->Location = System::Drawing::Point(623, 322);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(95, 23);
			   this->checkBox2->TabIndex = 30;
			   this->checkBox2->Text = L"   Ride Vehicle   ";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::checkBox2_CheckedChanged);
			   // 
			   // checkBox3
			   // 
			   this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox3->AutoSize = true;
			   this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox3->Location = System::Drawing::Point(734, 297);
			   this->checkBox3->Name = L"checkBox3";
			   this->checkBox3->Size = System::Drawing::Size(69, 23);
			   this->checkBox3->TabIndex = 31;
			   this->checkBox3->Text = L"Motorcycle";
			   this->checkBox3->UseVisualStyleBackColor = true;
			   this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::checkBox3_CheckedChanged);
			   // 
			   // checkBox4
			   // 
			   this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			   this->checkBox4->AutoSize = true;
			   this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->checkBox4->Location = System::Drawing::Point(734, 322);
			   this->checkBox4->Name = L"checkBox4";
			   this->checkBox4->Size = System::Drawing::Size(69, 23);
			   this->checkBox4->TabIndex = 32;
			   this->checkBox4->Text = L"      Car      ";
			   this->checkBox4->UseVisualStyleBackColor = true;
			   this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Driver_Form::checkBox4_CheckedChanged);
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(623, 61);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(0, 13);
			   this->label11->TabIndex = 33;
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(623, 131);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(0, 13);
			   this->label12->TabIndex = 34;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(623, 193);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(0, 13);
			   this->label13->TabIndex = 35;
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(626, 256);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(0, 13);
			   this->label14->TabIndex = 36;
			   // 
			   // Driver_Form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(920, 361);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->checkBox4);
			   this->Controls->Add(this->checkBox3);
			   this->Controls->Add(this->checkBox2);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->radioButton4);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->radioButton3);
			   this->Controls->Add(this->radioButton2);
			   this->Controls->Add(this->radioButton1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"Driver_Form";
			   this->Text = L"Transport Manager+";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Driver_Form::Driver_Form_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Driver_Form::Driver_Form_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
#pragma region Function Code
	private: System::Void Driver_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		TMS_Main.LoadSavedData();
		std::ifstream CurrentAcc;
		std::string s1, s2, s3;
		CurrentAcc.open("Data/CurrentAcc.txt");
		while (!CurrentAcc.eof()) {
			CurrentAcc >> s1 >> s2;
		}
		if (s1 == "Driver") {
			i = StringToInt(s2);
			String^ name, ^ balance, ^ cnic, ^ rating;
			s3 = TMS_Main.D_Accounts[i]->getFName() + " " + TMS_Main.D_Accounts[i]->getLName();
			name = gcnew String(s3.data());
			s3 = TMS_Main.D_Accounts[i]->getID();
			cnic = gcnew String(s3.data());
			s3 = "Balance: PKR " + IntToString(TMS_Main.D_Accounts[i]->getbal());
			balance = gcnew String(s3.data());
			int x = (TMS_Main.D_Accounts[i]->ComputeAndReturnRating()) * 100;
			s3 = "Rating: " + FloatToString(x / 100.0);
			rating = gcnew String(s3.data());
			this->label1->Text = (name);
			this->label3->Text = (cnic);
			this->label4->Text = (rating);
			this->label2->Text = (balance);
			this->radioButton1->Checked = true;
			HideVcl = 1;
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->textBox2->Hide();
			this->textBox3->Hide();
			this->textBox4->Hide();
			this->textBox5->Hide();
			this->ClientSize = System::Drawing::Size(546, 361);
		}
		else {
			this->Close();
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->button1->Hide();
			this->textBox1->Show();
			this->richTextBox1->Hide();
			this->label5->Text = ("Enter Ammount to Withdraw");
			this->label5->Show();
			this->label6->Show();
			this->button2->Text = ("Withdraw");
			this->button2->Location = System::Drawing::Point(321, 171);
			this->button2->Show();
			this->button3->Hide();
			this->button4->Hide();
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
			if (!TMS_Main.D_Accounts[i]->getFreedom()) {
				this->radioButton1->Checked = false;
				this->radioButton4->Checked = false;
				this->radioButton3->Checked = false;
				this->button2->Text = "Reject Order";
				this->button3->Text = "Accept Order";
				this->textBox1->Hide();
				this->richTextBox1->Show();
				this->label5->Hide();
				this->label6->Hide();
				this->button1->Show();
				this->button2->Show();
				this->button3->Show();
				this->button4->Show();
				oID = 0;
				this->richTextBox1->Text = "\nYou have no incoming orders";
				if (TMS_Main.Orders.size()) {
					while (TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID() && oID < TMS_Main.Orders.size() - 1) {
						oID++;
						while (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID() && (TMS_Main.Orders[oID]->getAccepted())) {
							oID++;
						}
					}
					if (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID()) {
						int h, m, s;
						s = TMS_Main.Orders[oID]->getPlaced();
						h = (s / 3600) % 24 + 5;
						s %= 3600;
						m = s / 60;
						s /= 60;
						std::string AmPm = "AM";
						if (h > 12) {
							h %= 12;
							AmPm = "PM";
						}
						std::string s1 = "Incoming Order for a " + TMS_Main.Orders[oID]->getType() + " From " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nPlaced at " + IntToString(h) + ":";
						if (m < 10) s1 = s1 + "0";
						s1 = s1 + IntToString(m) + AmPm + +"\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: PKR " + IntToString(TMS_Main.Orders[oID]->getCost());
						System::String^ s2 = gcnew String(s1.data());
						richTextBox1->Text = s2;
					}
					oID = 0;
				}
			}
			else {
				this->radioButton1->Checked = false;
				this->radioButton4->Checked = false;
				this->radioButton3->Checked = false;
				this->textBox1->Hide();
				this->richTextBox1->Text = "\nPlease Complete your Pending order first";
				this->richTextBox1->Show();
				this->label5->Hide();
				this->label6->Hide();
				this->button1->Hide();
				this->button2->Hide();
				this->button3->Hide();
				this->button4->Hide();
			}
			this->radioButton2->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton2->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton3->Checked) {
			HideVcl = 1;
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->textBox2->Hide();
			this->textBox3->Hide();
			this->textBox4->Hide();
			this->textBox5->Hide();
			this->checkBox1->Hide();
			this->checkBox2->Hide();
			this->ClientSize = System::Drawing::Size(546, 361);
			this->radioButton2->Checked = false;
			this->radioButton1->Checked = false;
			this->radioButton4->Checked = false;
			this->button2->Text = "Remove Vehicle";
			this->button3->Text = "Add\nVehicle";
			this->textBox1->Hide();
			this->richTextBox1->Show();
			this->label5->Hide();
			this->label6->Hide();
			this->button1->Show();
			this->button2->Show();
			this->button3->Show();
			this->button4->Show();
			vID = 0;
			this->richTextBox1->Text = "\nYou do not have any Vehicles yet";
			if (TMS_Main.D_Accounts[i]->Vehicles.size()) {
				std::string s1 = "\n" + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Year) + " Model\nRating: " + FloatToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->ComputeAndReturnRating());
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = s2;
			}
			this->radioButton3->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Text = "";
			this->ClientSize = System::Drawing::Size(546, 361);
			this->button2->Location = System::Drawing::Point(272, 241);
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton4->Checked) {
			this->radioButton2->Checked = false;
			this->radioButton1->Checked = false;
			this->radioButton3->Checked = false;
			this->richTextBox1->Hide();
			this->button1->Hide();
			this->textBox1->Show();
			this->label5->Text = ("Please enter your password to Delete the account");
			this->label5->Show();
			this->label6->Hide();
			this->button2->Text = ("Delete");
			this->button2->Location = System::Drawing::Point(321, 171);
			this->button2->Show();
			this->button3->Hide();
			this->button4->Hide();
			this->radioButton4->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->radioButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Text = "";
			this->button2->Location = System::Drawing::Point(272, 241);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			if (TMS_Main.Orders.size()) {
				if (oID > 0) {
					oID--;
				}
				while (TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID() && oID > 0) {
					oID--;
					while (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID() && (TMS_Main.Orders[oID]->getAccepted())) {
						oID--;
					}
				}
				if (oID >= 0 && TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID()) {
					while (TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID() && oID < TMS_Main.Orders.size() - 1) {
						oID++;
						while (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID() && (TMS_Main.Orders[oID]->getAccepted())) {
							oID++;
						}
					}
				}
				if (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID()) {
					if (TMS_Main.Orders.size()) {
						int h, m, s;
						s = TMS_Main.Orders[oID]->getPlaced();
						h = (s / 3600) % 24 + 5;
						s %= 3600;
						m = s / 60;
						s /= 60;
						std::string AmPm = "AM";
						if (h > 12) {
							h %= 12;
							AmPm = "PM";
						}
						std::string s1 = "Incoming Order for a " + TMS_Main.Orders[oID]->getType() + " From " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nPlaced at " + IntToString(h) + ":";
						if (m < 10) s1 = s1 + "0";
						s1 = s1 + IntToString(m) + AmPm + +"\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: PKR " + IntToString(TMS_Main.Orders[oID]->getCost());
						System::String^ s2 = gcnew String(s1.data());
						richTextBox1->Text = s2;
					}
				}
				else {
					oID = 0;
				}
			}
		}
		if (this->radioButton3->Checked) {
			if (vID > 0) {
				vID--;
			}
			if (TMS_Main.D_Accounts[i]->Vehicles.size()) {
				std::string s1 = "\n" + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Year) + " Model\nRating: " + FloatToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->ComputeAndReturnRating());
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = s2;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked) {
			msclr::interop::marshal_context context;
			System::String^ s1 = Convert::ToString(textBox1->Text);
			std::string s2 = context.marshal_as<std::string>(s1);
			if (isInt(s2)) {
				int x = StringToInt(s2);
				if (x <= TMS_Main.D_Accounts[i]->getbal()) {
					TMS_Main.D_Accounts[i]->deductbal(x);
					s2 = "Succesfully withdrew PKR " + s2;
					s1 = gcnew String(s2.data());
					MessageBox::Show(s1, "Transaction Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
					s2 = "Balance: PKR " + IntToString(TMS_Main.D_Accounts[i]->getbal());
					s1 = gcnew String(s2.data());
					this->label2->Text = (s1);
					return;
				}
				else {
					MessageBox::Show("You have insufficent balance to withdraw this ammount", "Error: Insufficent Balance", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a number in the input field", "Error: Incorrect Information", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		if (this->radioButton2->Checked) {
			if (MessageBox::Show("Are you sure you want to Reject this Order?", "Confirm Order Rejection", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->addbal(TMS_Main.Orders[oID]->getCost());
				TMS_Main.RejectOrder(oID);
				this->radioButton2->Checked = false;
				this->radioButton2->Checked = true;
			}
		}
		if (this->radioButton3->Checked) {
			if (MessageBox::Show("Are you sure you want to remove this vehicle from your account?", "Confirm Vehicle Removal", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				TMS_Main.D_Accounts[i]->removeVehicle(vID);
				this->radioButton3->Checked = false;
				this->radioButton3->Checked = true;
				MessageBox::Show("Are you sure you want to remove this vehicle from your account?", "Vehicle Removal Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		if (this->radioButton4->Checked) {
			msclr::interop::marshal_context context;
			System::String^ s1 = Convert::ToString(textBox1->Text);
			std::string s2 = context.marshal_as<std::string>(s1);
			if (s2 == TMS_Main.D_Accounts[i]->getPass()) {
				if (MessageBox::Show("Are you sure you want to delete your account?\nIt cannot be recovered once deleted", "Confirm Account Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
					TMS_Main.DeleteDAccount(i);
					MessageBox::Show("Account Deleted, Application will close now so you may Log-In with or Create another account", "Account Deletion Succesful", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->Close();
				}
			}
			else {
				MessageBox::Show("Incorrect Password Entered", "Error: Incorrect Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			if (MessageBox::Show("Once you accept an order, you will recieve payment in advance but you cannot accept/recieve more orders till the order has been confirmed to be completed by the customer", "Confirm Order Acceptance", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				TMS_Main.D_Accounts[i]->addbal(TMS_Main.Orders[oID]->getCost());
				TMS_Main.AcceptOrder(TMS_Main.Orders[oID]->getID());
				std::string s2 = "Balance: PKR " + IntToString(TMS_Main.D_Accounts[i]->getbal());
				System::String^ s1 = gcnew String(s2.data());
				this->label2->Text = (s1);
				this->radioButton2->Checked = false;
				this->radioButton2->Checked = true;
			}
		}
		if (this->radioButton3->Checked) {
			if (HideVcl) {
				this->label7->Show();
				this->label8->Show();
				this->label9->Show();
				this->label10->Show();
				this->textBox2->Show();
				this->textBox3->Show();
				this->textBox4->Show();
				this->textBox5->Show();
				this->checkBox1->Show();
				this->checkBox2->Show();
				this->ClientSize = System::Drawing::Size(920, 361);
			}
			else {
				this->label7->Hide();
				this->label8->Hide();
				this->label9->Hide();
				this->label10->Hide();
				this->textBox2->Hide();
				this->textBox3->Hide();
				this->textBox4->Hide();
				this->textBox5->Hide();
				this->checkBox1->Hide();
				this->checkBox2->Hide();
				this->ClientSize = System::Drawing::Size(546, 361);
			}
			HideVcl = !HideVcl;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked) {
			if (TMS_Main.Orders.size()) {
				if (TMS_Main.Orders.size()) {
					if (oID > 0) {
						oID++;
					}
					while (TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID() && oID < TMS_Main.Orders.size() - 1) {
						oID++;
						while (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID() && (TMS_Main.Orders[oID]->getAccepted())) {
							oID++;
						}
					}
					if (oID <= TMS_Main.Orders.size() - 1 && TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID()) {
						while (TMS_Main.D_Accounts[i]->getID() != TMS_Main.Orders[oID]->getDID() && oID > 0) {
							oID--;
							while (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID() && (TMS_Main.Orders[oID]->getAccepted())) {
								oID--;
							}
						}
					}
					if (TMS_Main.Orders[oID]->getDID() == TMS_Main.D_Accounts[i]->getID()) {
						if (TMS_Main.Orders.size()) {
							int h, m, s;
							s = TMS_Main.Orders[oID]->getPlaced();
							h = (s / 3600) % 24 + 5;
							s %= 3600;
							m = s / 60;
							s /= 60;
							std::string AmPm = "AM";
							if (h > 12) {
								h %= 12;
								AmPm = "PM";
							}
							std::string s1 = "Incoming Order for a " + TMS_Main.Orders[oID]->getType() + " From " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getFName() + " " + TMS_Main.C_Accounts[TMS_Main.FindCNIC(TMS_Main.Orders[oID]->getCID())]->getLName() + "\nPlaced at " + IntToString(h) + ":";
							if (m < 10) s1 = s1 + "0";
							s1 = s1 + IntToString(m) + AmPm + +"\nSelected Vehicle: " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Company + " " + TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[TMS_Main.FindCNIC2(TMS_Main.Orders[oID]->getDID())]->Vehicles[TMS_Main.FindID(TMS_Main.Orders[oID]->getDID(), TMS_Main.Orders[oID]->getVID())]->Model.Year) + "\nOrder Cost: PKR " + IntToString(TMS_Main.Orders[oID]->getCost());
							System::String^ s2 = gcnew String(s1.data());
							richTextBox1->Text = s2;
						}
					}
				}
			}
		}
		if (this->radioButton3->Checked) {
			if (vID < TMS_Main.D_Accounts[i]->Vehicles.size() - 1) {
				vID++;
			}
			if (TMS_Main.D_Accounts[i]->Vehicles.size()) {
				std::string s1 = "\n" + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Year) + " Model\nRating: " + FloatToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->ComputeAndReturnRating());
				System::String^ s2 = gcnew String(s1.data());
				this->richTextBox1->Text = s2;
			}
		}
	}

	private: System::Void Driver_Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TMS_Main.SaveLoadedData();
		Application::Exit();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ s1 = Convert::ToString(textBox1->Text);
		std::string s2 = context.marshal_as<std::string>(s1);
		if (!isInt(s2)) {
			this->label6->Text = ("Please enter a number");
		}
		else {
			this->label6->Text = "";
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string std1, std2, std3, std4, std5, std6;
		msclr::interop::marshal_context context;
		System::String^ s1 = Convert::ToString(textBox2->Text);
		std1 = context.marshal_as<std::string>(s1);
		s1 = Convert::ToString(textBox3->Text);
		std2 = context.marshal_as<std::string>(s1);
		s1 = Convert::ToString(textBox4->Text);
		std3 = context.marshal_as<std::string>(s1);
		s1 = Convert::ToString(textBox5->Text);
		std4 = context.marshal_as<std::string>(s1);
		try {
			if (isNull(std1) || isNull(std2) || isNull(std3) || isNull(std4)) {
				throw 1;
			}
			if (ContainsSpaces(std1) || ContainsSpaces(std2) || ContainsSpaces(std3) || ContainsSpaces(std4)) {
				throw 0;
			}
		}
		catch (int x) {
			if (x) {
				MessageBox::Show("Please do not leave any input fields empty, Enter data and try again", "Error: Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
			else {
				MessageBox::Show("Cannot Enter spaces in input fields, please Re-Enter the data without using spaces", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
		}
		if (!isInt(std3)) {
			MessageBox::Show("Please enter a number in the Vehicle Year field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (isInt(std4)) {
			if (!TMS_Main.idUniqueLisence(StringToInt(std4))) {
				MessageBox::Show("Entered Lisence plate number is already in use by another vehicle", "Error: Repeated Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
				return;
			}
		}
		else {
			MessageBox::Show("Please enter a number in the Licence Plate Field", "Error: Invalid Information", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
		if (this->checkBox1->Checked) std5 = "Delivery";
		else std5 = "Ride";
		if (this->checkBox3->Checked) std6 = "Motorcycle";
		else std6 = "Car";
		VclModel m(std1, std2, StringToInt(std3));
		Vehicle temp(TMS_Main.D_Accounts[i]->getID(), std6, StringToInt(std4), m, std5);
		TMS_Main.D_Accounts[i]->Vehicles.push_back(temp);
		MessageBox::Show("Succesfully Added the vehicle to your account", "Vehicle Addition Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
		vID = 0;
		std::string se1 = "\n" + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Company + " " + TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Model + " " + IntToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->Model.Year) + " Model\nRating: " + FloatToString(TMS_Main.D_Accounts[i]->Vehicles[vID]->ComputeAndReturnRating());
		System::String^ s2 = gcnew String(se1.data());
		this->richTextBox1->Text = s2;
		return;
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ st1 = gcnew String(this->textBox2->Text);
		std::string s2 = context.marshal_as<std::string>(st1);
		if (ContainsSpaces(s2)) {
			this->label11->Text = "Cannot enter spaces in this input field";
		}
		else {
			this->label11->Text = "";
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ st1 = gcnew String(this->textBox2->Text);
		std::string s2 = context.marshal_as<std::string>(st1);
		if (ContainsSpaces(s2)) {
			this->label12->Text = "Cannot enter spaces in this input field";
		}
		else {
			this->label12->Text = "";
		}
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ st1 = gcnew String(this->textBox4->Text);
		std::string s2 = context.marshal_as<std::string>(st1);
		if (!isInt(s2)) {
			this->label13->Text = "Please enter a number";
		}
		else {
			this->label13->Text = "";
		}
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		System::String^ st1 = gcnew String(this->textBox5->Text);
		std::string s2 = context.marshal_as<std::string>(st1);
		if (!isInt(s2)) {
			this->label14->Text = "Please enter a number";
		}
		else {
			this->label14->Text = "";
		}
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox3->Checked) {
			this->checkBox4->Checked = false;
			this->checkBox3->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->checkBox3->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox4->Checked) {
			this->checkBox3->Checked = false;
			this->checkBox4->BackColor = System::Drawing::SystemColors::ControlDark;
		}
		else {
			this->checkBox4->BackColor = System::Drawing::Color::WhiteSmoke;
		}
	}
#pragma endregion
	};
#pragma endregion
}
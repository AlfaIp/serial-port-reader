#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  serialPort1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	//private: String^ data;

	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 1000;
			this->serialPort1->WriteTimeout = 1000;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(558, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"1152" });
			this->comboBox2->Location = System::Drawing::Point(558, 75);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(476, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"COM Ports";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(477, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 51);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(558, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 51);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Enter Here";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 53);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(348, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 53);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Read";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(63, 72);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Port Status";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(243, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(205, 96);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 270);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// find available ports
	private: void findPorts(void) {
			// get port names
			array<Object^>^ objectArray = SerialPort::GetPortNames();
			this->comboBox1->Items->AddRange(objectArray);
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Text = String::Empty;
		if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty)
			this->richTextBox1->Text = "Please Select Port Settings";
		else {
			try {
				// make sure port isn't open
				if (!this->serialPort1->IsOpen) {
					this->serialPort1->PortName = this->comboBox1->Text;
					this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
					this->textBox2->Text = "Enter Message Here";
					this->serialPort1->Open();
					this->progressBar1->Value = 100;
					this->button1->Enabled = false;
				}
				else
					this->textBox2->Text = "Port isn't opened";
			}
			catch(UnauthorizedAccessException^) {
				this->richTextBox1->Text = "UnauthorizedAccess";
			}
			
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->serialPort1->Close();
		this->progressBar1->Value = 0;
		// enable read button
		this->button4->Enabled = true;
		// enable init button
		this->button1->Enabled = true;

	}

	// send button
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
		String^ name = this->serialPort1->PortName;
		String^ message = this->textBox2->Text;
		if (this->serialPort1->IsOpen) {
			this->serialPort1->WriteLine(message);
			this->richTextBox1->Text = "Success";
		}
		else
			this->textBox2->Text = "Port not opened";

	}

	// read button
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->serialPort1->IsOpen) {
			this->richTextBox1->Text = String::Empty;
			try {
				this->richTextBox1->Text = this->serialPort1->ReadExisting();
				//data = this->serialPort1->ReadExisting();
			}
			catch (TimeoutException^) {
				this->richTextBox1->Text = "Timeout Exception";
			}
			this->button1->Enabled = false;

		}
		else
			this->richTextBox1->Text = "Port not opened";
		}
	};
}



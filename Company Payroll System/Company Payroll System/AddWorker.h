#pragma once


#include"Worker.h"
#include"DisplayWorkers.h"
#include"Trainee.h"

namespace CompanyPayrollSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;  
	using namespace System::IO;

	using namespace System::Collections::Generic;

using namespace System::IO;  



	/// <summary>
	/// Summary for AddWorker
	/// </summary>
	public ref class AddWorker : public System::Windows::Forms::Form
	{
	public:
		AddWorker(void)
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
		~AddWorker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  EmployeeButton;
	private: System::Windows::Forms::Button^  TraineeButton;
	protected: 

	protected: 




	private: System::Windows::Forms::Panel^  EmpPanel;














	private: System::Windows::Forms::TextBox^  HoursBox;

	private: System::Windows::Forms::TextBox^  AgeBox;
	private: System::Windows::Forms::TextBox^  NameBox;
	private: System::Windows::Forms::TextBox^  IDBox;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::DataGridView^  EmployeesData;











	private: System::Windows::Forms::Panel^  TraineePanel;
	private: System::Windows::Forms::DataGridView^  TraineesData;







	private: System::Windows::Forms::TextBox^  TraineeGPA;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  TraineeYear;
	private: System::Windows::Forms::TextBox^  TraineeFaculty;
	private: System::Windows::Forms::TextBox^  TraineeAge;
	private: System::Windows::Forms::TextBox^  TraineeName;
	private: System::Windows::Forms::TextBox^  TraineeID;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  AddTrainee;
	private: System::Windows::Forms::ComboBox^  PositionBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  N;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  A;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  S;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hours;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pos;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tax;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pay;















































































































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->EmployeeButton = (gcnew System::Windows::Forms::Button());
			this->TraineeButton = (gcnew System::Windows::Forms::Button());
			this->EmpPanel = (gcnew System::Windows::Forms::Panel());
			this->PositionBox = (gcnew System::Windows::Forms::ComboBox());
			this->EmployeesData = (gcnew System::Windows::Forms::DataGridView());
			this->HoursBox = (gcnew System::Windows::Forms::TextBox());
			this->AgeBox = (gcnew System::Windows::Forms::TextBox());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->TraineePanel = (gcnew System::Windows::Forms::Panel());
			this->TraineesData = (gcnew System::Windows::Forms::DataGridView());
			this->TraineeGPA = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TraineeYear = (gcnew System::Windows::Forms::TextBox());
			this->TraineeFaculty = (gcnew System::Windows::Forms::TextBox());
			this->TraineeAge = (gcnew System::Windows::Forms::TextBox());
			this->TraineeName = (gcnew System::Windows::Forms::TextBox());
			this->TraineeID = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->AddTrainee = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->A = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tax = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pay = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmpPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeesData))->BeginInit();
			this->TraineePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->BeginInit();
			this->SuspendLayout();
			// 
			// EmployeeButton
			// 
			this->EmployeeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeButton->FlatAppearance->BorderSize = 0;
			this->EmployeeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmployeeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->EmployeeButton->Location = System::Drawing::Point(191, 40);
			this->EmployeeButton->Name = L"EmployeeButton";
			this->EmployeeButton->Size = System::Drawing::Size(188, 73);
			this->EmployeeButton->TabIndex = 5;
			this->EmployeeButton->Text = L"Add Employee";
			this->EmployeeButton->UseVisualStyleBackColor = false;
			this->EmployeeButton->Click += gcnew System::EventHandler(this, &AddWorker::EmployeeButton_Click);
			// 
			// TraineeButton
			// 
			this->TraineeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeButton->FlatAppearance->BorderSize = 0;
			this->TraineeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TraineeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->TraineeButton->Location = System::Drawing::Point(521, 40);
			this->TraineeButton->Name = L"TraineeButton";
			this->TraineeButton->Size = System::Drawing::Size(188, 73);
			this->TraineeButton->TabIndex = 4;
			this->TraineeButton->Text = L"Add Trainee";
			this->TraineeButton->UseVisualStyleBackColor = false;
			this->TraineeButton->Click += gcnew System::EventHandler(this, &AddWorker::Trainee_Click);
			// 
			// EmpPanel
			// 
			this->EmpPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->EmpPanel->Controls->Add(this->PositionBox);
			this->EmpPanel->Controls->Add(this->EmployeesData);
			this->EmpPanel->Controls->Add(this->HoursBox);
			this->EmpPanel->Controls->Add(this->AgeBox);
			this->EmpPanel->Controls->Add(this->NameBox);
			this->EmpPanel->Controls->Add(this->IDBox);
			this->EmpPanel->Controls->Add(this->label6);
			this->EmpPanel->Controls->Add(this->label5);
			this->EmpPanel->Controls->Add(this->label3);
			this->EmpPanel->Controls->Add(this->label2);
			this->EmpPanel->Controls->Add(this->label1);
			this->EmpPanel->Controls->Add(this->AddButton);
			this->EmpPanel->Location = System::Drawing::Point(12, 163);
			this->EmpPanel->Name = L"EmpPanel";
			this->EmpPanel->Size = System::Drawing::Size(876, 457);
			this->EmpPanel->TabIndex = 8;
			this->EmpPanel->Visible = false;
			// 
			// PositionBox
			// 
			this->PositionBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PositionBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->PositionBox->FormattingEnabled = true;
			this->PositionBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"CEO", L"Manager", L"Team Leader", L"Team Member"});
			this->PositionBox->Location = System::Drawing::Point(100, 191);
			this->PositionBox->Name = L"PositionBox";
			this->PositionBox->Size = System::Drawing::Size(160, 27);
			this->PositionBox->TabIndex = 21;
			// 
			// EmployeesData
			// 
			this->EmployeesData->AllowUserToAddRows = false;
			this->EmployeesData->AllowUserToDeleteRows = false;
			this->EmployeesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->EmployeesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EmployeesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->id, this->N, 
				this->A, this->S, this->Hours, this->Pos, this->Tax, this->Pay});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeesData->DefaultCellStyle = dataGridViewCellStyle2;
			this->EmployeesData->Location = System::Drawing::Point(334, 11);
			this->EmployeesData->Name = L"EmployeesData";
			this->EmployeesData->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeesData->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->EmployeesData->Size = System::Drawing::Size(525, 429);
			this->EmployeesData->TabIndex = 20;
			// 
			// HoursBox
			// 
			this->HoursBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HoursBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->HoursBox->Location = System::Drawing::Point(145, 145);
			this->HoursBox->Multiline = true;
			this->HoursBox->Name = L"HoursBox";
			this->HoursBox->Size = System::Drawing::Size(160, 25);
			this->HoursBox->TabIndex = 18;
			// 
			// AgeBox
			// 
			this->AgeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AgeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->AgeBox->Location = System::Drawing::Point(88, 103);
			this->AgeBox->Multiline = true;
			this->AgeBox->Name = L"AgeBox";
			this->AgeBox->Size = System::Drawing::Size(160, 25);
			this->AgeBox->TabIndex = 16;
			// 
			// NameBox
			// 
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->NameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->NameBox->Location = System::Drawing::Point(89, 60);
			this->NameBox->Multiline = true;
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(160, 25);
			this->NameBox->TabIndex = 15;
			// 
			// IDBox
			// 
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->IDBox->Location = System::Drawing::Point(58, 25);
			this->IDBox->Multiline = true;
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(160, 25);
			this->IDBox->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label6->Location = System::Drawing::Point(21, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 19);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Position";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label5->Location = System::Drawing::Point(21, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Working Hours";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label3->Location = System::Drawing::Point(28, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Age";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label2->Location = System::Drawing::Point(25, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label1->Location = System::Drawing::Point(28, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID";
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->AddButton->FlatAppearance->BorderSize = 0;
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AddButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->AddButton->Location = System::Drawing::Point(88, 286);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(118, 49);
			this->AddButton->TabIndex = 5;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddWorker::AddButton_Click);
			// 
			// TraineePanel
			// 
			this->TraineePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->TraineePanel->Controls->Add(this->TraineesData);
			this->TraineePanel->Controls->Add(this->TraineeGPA);
			this->TraineePanel->Controls->Add(this->label11);
			this->TraineePanel->Controls->Add(this->TraineeYear);
			this->TraineePanel->Controls->Add(this->TraineeFaculty);
			this->TraineePanel->Controls->Add(this->TraineeAge);
			this->TraineePanel->Controls->Add(this->TraineeName);
			this->TraineePanel->Controls->Add(this->TraineeID);
			this->TraineePanel->Controls->Add(this->label4);
			this->TraineePanel->Controls->Add(this->label7);
			this->TraineePanel->Controls->Add(this->label8);
			this->TraineePanel->Controls->Add(this->label9);
			this->TraineePanel->Controls->Add(this->label10);
			this->TraineePanel->Controls->Add(this->AddTrainee);
			this->TraineePanel->Location = System::Drawing::Point(11, 163);
			this->TraineePanel->Name = L"TraineePanel";
			this->TraineePanel->Size = System::Drawing::Size(876, 457);
			this->TraineePanel->TabIndex = 22;
			this->TraineePanel->Visible = false;
			// 
			// TraineesData
			// 
			this->TraineesData->AllowUserToAddRows = false;
			this->TraineesData->AllowUserToDeleteRows = false;
			this->TraineesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->TraineesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TraineesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn6});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TraineesData->DefaultCellStyle = dataGridViewCellStyle5;
			this->TraineesData->Location = System::Drawing::Point(334, 11);
			this->TraineesData->Name = L"TraineesData";
			this->TraineesData->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->TraineesData->Size = System::Drawing::Size(525, 429);
			this->TraineesData->TabIndex = 23;
			// 
			// TraineeGPA
			// 
			this->TraineeGPA->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeGPA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeGPA->Location = System::Drawing::Point(70, 235);
			this->TraineeGPA->Multiline = true;
			this->TraineeGPA->Name = L"TraineeGPA";
			this->TraineeGPA->Size = System::Drawing::Size(160, 25);
			this->TraineeGPA->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label11->Location = System::Drawing::Point(21, 235);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 19);
			this->label11->TabIndex = 21;
			this->label11->Text = L"GPA";
			// 
			// TraineeYear
			// 
			this->TraineeYear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeYear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeYear->Location = System::Drawing::Point(145, 193);
			this->TraineeYear->Multiline = true;
			this->TraineeYear->Name = L"TraineeYear";
			this->TraineeYear->Size = System::Drawing::Size(160, 25);
			this->TraineeYear->TabIndex = 19;
			// 
			// TraineeFaculty
			// 
			this->TraineeFaculty->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeFaculty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeFaculty->Location = System::Drawing::Point(145, 145);
			this->TraineeFaculty->Multiline = true;
			this->TraineeFaculty->Name = L"TraineeFaculty";
			this->TraineeFaculty->Size = System::Drawing::Size(160, 25);
			this->TraineeFaculty->TabIndex = 18;
			// 
			// TraineeAge
			// 
			this->TraineeAge->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeAge->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeAge->Location = System::Drawing::Point(88, 103);
			this->TraineeAge->Multiline = true;
			this->TraineeAge->Name = L"TraineeAge";
			this->TraineeAge->Size = System::Drawing::Size(160, 25);
			this->TraineeAge->TabIndex = 16;
			// 
			// TraineeName
			// 
			this->TraineeName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeName->Location = System::Drawing::Point(89, 60);
			this->TraineeName->Multiline = true;
			this->TraineeName->Name = L"TraineeName";
			this->TraineeName->Size = System::Drawing::Size(160, 25);
			this->TraineeName->TabIndex = 15;
			// 
			// TraineeID
			// 
			this->TraineeID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeID->Location = System::Drawing::Point(58, 25);
			this->TraineeID->Multiline = true;
			this->TraineeID->Name = L"TraineeID";
			this->TraineeID->Size = System::Drawing::Size(160, 25);
			this->TraineeID->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label4->Location = System::Drawing::Point(6, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Academic Year";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label7->Location = System::Drawing::Point(21, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Faculty Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label8->Location = System::Drawing::Point(28, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 19);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Age";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label9->Location = System::Drawing::Point(25, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 19);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label10->Location = System::Drawing::Point(28, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 19);
			this->label10->TabIndex = 6;
			this->label10->Text = L"ID";
			// 
			// AddTrainee
			// 
			this->AddTrainee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->AddTrainee->FlatAppearance->BorderSize = 0;
			this->AddTrainee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddTrainee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AddTrainee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->AddTrainee->Location = System::Drawing::Point(88, 286);
			this->AddTrainee->Name = L"AddTrainee";
			this->AddTrainee->Size = System::Drawing::Size(118, 49);
			this->AddTrainee->TabIndex = 5;
			this->AddTrainee->Text = L"Add";
			this->AddTrainee->UseVisualStyleBackColor = false;
			this->AddTrainee->Click += gcnew System::EventHandler(this, &AddWorker::AddTrainee_Click);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->FillWeight = 50;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->FillWeight = 50;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 40;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Salary";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Faculty";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 115;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Academic Year";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 90;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"GPA";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// id
			// 
			this->id->FillWeight = 50;
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 50;
			// 
			// N
			// 
			this->N->HeaderText = L"Name";
			this->N->Name = L"N";
			this->N->ReadOnly = true;
			// 
			// A
			// 
			this->A->FillWeight = 50;
			this->A->HeaderText = L"Age";
			this->A->Name = L"A";
			this->A->ReadOnly = true;
			this->A->Width = 40;
			// 
			// S
			// 
			this->S->HeaderText = L"Salary";
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 50;
			// 
			// Hours
			// 
			this->Hours->HeaderText = L"Hours";
			this->Hours->Name = L"Hours";
			this->Hours->ReadOnly = true;
			this->Hours->Width = 70;
			// 
			// Pos
			// 
			this->Pos->HeaderText = L"Position";
			this->Pos->Name = L"Pos";
			this->Pos->ReadOnly = true;
			this->Pos->Width = 80;
			// 
			// Tax
			// 
			this->Tax->HeaderText = L"Tax Rate";
			this->Tax->Name = L"Tax";
			this->Tax->ReadOnly = true;
			this->Tax->Width = 50;
			// 
			// Pay
			// 
			this->Pay->HeaderText = L"Pay Rate";
			this->Pay->Name = L"Pay";
			this->Pay->ReadOnly = true;
			this->Pay->Width = 50;
			// 
			// AddWorker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->TraineePanel);
			this->Controls->Add(this->EmpPanel);
			this->Controls->Add(this->EmployeeButton);
			this->Controls->Add(this->TraineeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddWorker";
			this->Text = L"AddWorker";
			this->EmpPanel->ResumeLayout(false);
			this->EmpPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeesData))->EndInit();
			this->TraineePanel->ResumeLayout(false);
			this->TraineePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	




private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
	///////////////////////////////////////////
	///////////////////////////////////////////
	         bool emp;
			 Employee ^employee;
	         if (IDBox->Text == " " || NameBox->Text == " " || AgeBox->Text == " " || HoursBox->Text == " " || PositionBox->Text == " ") {
				 MessageBox::Show("Fields can not be Empty! ");
	         }
			 else {
				 String^ ID = gcnew String((char*)Marshal::StringToHGlobalAnsi(IDBox->Text).ToPointer());
				 String^ Name = gcnew String((char*)Marshal::StringToHGlobalAnsi(NameBox->Text).ToPointer());
				 int Age = Convert::ToInt32(AgeBox->Text);
				 int Hours = Convert::ToInt32(HoursBox->Text);
				 String^ Position = gcnew String((char*)Marshal::StringToHGlobalAnsi(PositionBox->Text).ToPointer());
				 employee = gcnew Employee(ID, Name, Age, Hours, Position);
				 emp = employee->AddEmployee(employee);

				 if (!emp)
				 {
					 IDBox->Text = "";
				 }
				 else
				 {
					 IDBox->Text = "";
					 NameBox->Text = "";
					 AgeBox->Text = "";
					 HoursBox->Text = "";
					 PositionBox->Text = "";

					 employee->DisplayEmployees(EmployeesData);
				 }
			 }
			
			 
		 }

private: System::Void EmployeeButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 Employee ^employee = gcnew Employee;
			 employee->DisplayEmployees(EmployeesData);


			 EmpPanel->Visible = true;
			 TraineePanel->Visible = false;

		 }
private: System::Void Trainee_Click(System::Object^  sender, System::EventArgs^  e) {

			Trainee ^trainee =gcnew Trainee;
			trainee->DisplayTrainees(TraineesData);
			
			
             TraineePanel->Visible = true;
			 EmpPanel->Visible = false;
		 }
private: System::Void AddTrainee_Click(System::Object^  sender, System::EventArgs^  e) {
	////////////////////////////////////////
	///////////////////////////////////////
	/////////////////////////////////////
	         bool t;
			 Trainee ^trainee;
	         if (TraineeID->Text == ""||TraineeName->Text==""|| TraineeAge->Text==""|| TraineeFaculty->Text==""|| TraineeYear->Text==""|| TraineeGPA->Text=="") {
				 MessageBox::Show("Fields can not be Empty !!");
			 }
			 else {
				 String^ ID = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeID->Text).ToPointer());
				 String^ Name = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeName->Text).ToPointer());
				 int Age = Convert::ToInt32(TraineeAge->Text);
				 String^ Faculty = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeFaculty->Text).ToPointer());
				 String ^ Year = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeYear->Text).ToPointer());
				 float GPA = (float)Convert::ToDouble(TraineeGPA->Text);
				 trainee = gcnew Trainee(ID, Name, Age, Faculty, Year, GPA);
				 t = trainee->AddTrainee(trainee);


				 if (!t)
				 {
					 IDBox->Text = "";
				 }
				 else
				 {
					 TraineeID->Text = "";
					 TraineeName->Text = "";
					 TraineeAge->Text = "";
					 TraineeFaculty->Text = "";
					 TraineeYear->Text = "";
					 TraineeGPA->Text = "";
					 trainee->DisplayTrainees(TraineesData);
				 }

			 }

		 }


};
}

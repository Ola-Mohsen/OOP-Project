#pragma once

#include"Employee.h"
#include"Worker.h"
#include"Trainee.h"
namespace CompanyPayrollSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace System::Runtime::InteropServices;  

	/// <summary>
	/// Summary for UpdateWorker
	/// </summary>
	public ref class UpdateWorker : public System::Windows::Forms::Form
	{
		String ^GlobalID;
		
	public:
		UpdateWorker(void)
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
		~UpdateWorker()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Panel^  TraineePanel;
	private: System::Windows::Forms::DataGridView^  TraineesData;





























































	private: System::Windows::Forms::Button^  EmployeeButton;
	private: System::Windows::Forms::Button^  TraineeButton;
	private: System::Windows::Forms::Panel^  UpdateTraineePanel;
	private: System::Windows::Forms::TextBox^  TraineeGPABox;




















private: System::Windows::Forms::TextBox^  TraineeAgeBox;

private: System::Windows::Forms::TextBox^  TraineeNameBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Button^  UpdateTraineeButton;

private: System::Windows::Forms::Button^  TraineeSearchButton;


	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  TraineeID;


private: System::Windows::Forms::Panel^  EmployeePanel;
private: System::Windows::Forms::Panel^  UpdateEmployeePanel;



private: System::Windows::Forms::TextBox^  EmployeeHoursBox;

private: System::Windows::Forms::TextBox^  EmployeeAgeBox;

private: System::Windows::Forms::TextBox^  EmployeeNameBox;

private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  UpdateEmployeeButton;

private: System::Windows::Forms::Button^  EmployeeSearchButton;









private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  EmployeeIDBox;


private: System::Windows::Forms::DataGridView^  EmployeeDataGridView;









private: System::Windows::Forms::TextBox^  TraineeFacultyBox;
private: System::Windows::Forms::Label^  Faculty;
private: System::Windows::Forms::TextBox^  TraineeYearBox;
private: System::Windows::Forms::ComboBox^  EmployeePositionBox;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;

















































































































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
			this->TraineePanel = (gcnew System::Windows::Forms::Panel());
			this->UpdateTraineePanel = (gcnew System::Windows::Forms::Panel());
			this->TraineeFacultyBox = (gcnew System::Windows::Forms::TextBox());
			this->Faculty = (gcnew System::Windows::Forms::Label());
			this->TraineeGPABox = (gcnew System::Windows::Forms::TextBox());
			this->TraineeYearBox = (gcnew System::Windows::Forms::TextBox());
			this->TraineeAgeBox = (gcnew System::Windows::Forms::TextBox());
			this->TraineeNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->UpdateTraineeButton = (gcnew System::Windows::Forms::Button());
			this->TraineesData = (gcnew System::Windows::Forms::DataGridView());
			this->TraineeSearchButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TraineeID = (gcnew System::Windows::Forms::TextBox());
			this->EmployeePanel = (gcnew System::Windows::Forms::Panel());
			this->UpdateEmployeePanel = (gcnew System::Windows::Forms::Panel());
			this->EmployeeHoursBox = (gcnew System::Windows::Forms::TextBox());
			this->EmployeeAgeBox = (gcnew System::Windows::Forms::TextBox());
			this->EmployeeNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->UpdateEmployeeButton = (gcnew System::Windows::Forms::Button());
			this->EmployeeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->EmployeeSearchButton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->EmployeeIDBox = (gcnew System::Windows::Forms::TextBox());
			this->EmployeeButton = (gcnew System::Windows::Forms::Button());
			this->TraineeButton = (gcnew System::Windows::Forms::Button());
			this->EmployeePositionBox = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TraineePanel->SuspendLayout();
			this->UpdateTraineePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->BeginInit();
			this->EmployeePanel->SuspendLayout();
			this->UpdateEmployeePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeeDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// TraineePanel
			// 
			this->TraineePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->TraineePanel->Controls->Add(this->UpdateTraineePanel);
			this->TraineePanel->Controls->Add(this->TraineesData);
			this->TraineePanel->Controls->Add(this->TraineeSearchButton);
			this->TraineePanel->Controls->Add(this->label5);
			this->TraineePanel->Controls->Add(this->TraineeID);
			this->TraineePanel->Location = System::Drawing::Point(12, 163);
			this->TraineePanel->Name = L"TraineePanel";
			this->TraineePanel->Size = System::Drawing::Size(870, 453);
			this->TraineePanel->TabIndex = 21;
			this->TraineePanel->Visible = false;
			// 
			// UpdateTraineePanel
			// 
			this->UpdateTraineePanel->Controls->Add(this->TraineeFacultyBox);
			this->UpdateTraineePanel->Controls->Add(this->Faculty);
			this->UpdateTraineePanel->Controls->Add(this->TraineeGPABox);
			this->UpdateTraineePanel->Controls->Add(this->TraineeYearBox);
			this->UpdateTraineePanel->Controls->Add(this->TraineeAgeBox);
			this->UpdateTraineePanel->Controls->Add(this->TraineeNameBox);
			this->UpdateTraineePanel->Controls->Add(this->label1);
			this->UpdateTraineePanel->Controls->Add(this->label2);
			this->UpdateTraineePanel->Controls->Add(this->label3);
			this->UpdateTraineePanel->Controls->Add(this->label4);
			this->UpdateTraineePanel->Controls->Add(this->UpdateTraineeButton);
			this->UpdateTraineePanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->UpdateTraineePanel->Location = System::Drawing::Point(6, 121);
			this->UpdateTraineePanel->Name = L"UpdateTraineePanel";
			this->UpdateTraineePanel->Size = System::Drawing::Size(313, 302);
			this->UpdateTraineePanel->TabIndex = 32;
			this->UpdateTraineePanel->Visible = false;
			// 
			// TraineeFacultyBox
			// 
			this->TraineeFacultyBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeFacultyBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeFacultyBox->Location = System::Drawing::Point(112, 100);
			this->TraineeFacultyBox->Multiline = true;
			this->TraineeFacultyBox->Name = L"TraineeFacultyBox";
			this->TraineeFacultyBox->Size = System::Drawing::Size(160, 25);
			this->TraineeFacultyBox->TabIndex = 30;
			// 
			// Faculty
			// 
			this->Faculty->AutoSize = true;
			this->Faculty->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Faculty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Faculty->Location = System::Drawing::Point(27, 103);
			this->Faculty->Name = L"Faculty";
			this->Faculty->Size = System::Drawing::Size(65, 19);
			this->Faculty->TabIndex = 29;
			this->Faculty->Text = L"Faculty";
			// 
			// TraineeGPABox
			// 
			this->TraineeGPABox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeGPABox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeGPABox->Location = System::Drawing::Point(70, 193);
			this->TraineeGPABox->Multiline = true;
			this->TraineeGPABox->Name = L"TraineeGPABox";
			this->TraineeGPABox->Size = System::Drawing::Size(160, 25);
			this->TraineeGPABox->TabIndex = 28;
			// 
			// TraineeYearBox
			// 
			this->TraineeYearBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeYearBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeYearBox->Location = System::Drawing::Point(147, 144);
			this->TraineeYearBox->Multiline = true;
			this->TraineeYearBox->Name = L"TraineeYearBox";
			this->TraineeYearBox->Size = System::Drawing::Size(160, 25);
			this->TraineeYearBox->TabIndex = 27;
			// 
			// TraineeAgeBox
			// 
			this->TraineeAgeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeAgeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeAgeBox->Location = System::Drawing::Point(97, 54);
			this->TraineeAgeBox->Multiline = true;
			this->TraineeAgeBox->Name = L"TraineeAgeBox";
			this->TraineeAgeBox->Size = System::Drawing::Size(160, 25);
			this->TraineeAgeBox->TabIndex = 26;
			// 
			// TraineeNameBox
			// 
			this->TraineeNameBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeNameBox->Location = System::Drawing::Point(85, 20);
			this->TraineeNameBox->Multiline = true;
			this->TraineeNameBox->Name = L"TraineeNameBox";
			this->TraineeNameBox->Size = System::Drawing::Size(160, 25);
			this->TraineeNameBox->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label1->Location = System::Drawing::Point(21, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 19);
			this->label1->TabIndex = 24;
			this->label1->Text = L"GPA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label2->Location = System::Drawing::Point(8, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 19);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Academic Year";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label3->Location = System::Drawing::Point(27, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 19);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Age";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label4->Location = System::Drawing::Point(21, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 19);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Name";
			// 
			// UpdateTraineeButton
			// 
			this->UpdateTraineeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->UpdateTraineeButton->FlatAppearance->BorderSize = 0;
			this->UpdateTraineeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateTraineeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpdateTraineeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->UpdateTraineeButton->Location = System::Drawing::Point(87, 245);
			this->UpdateTraineeButton->Name = L"UpdateTraineeButton";
			this->UpdateTraineeButton->Size = System::Drawing::Size(118, 49);
			this->UpdateTraineeButton->TabIndex = 20;
			this->UpdateTraineeButton->Text = L"Update";
			this->UpdateTraineeButton->UseVisualStyleBackColor = false;
			this->UpdateTraineeButton->Click += gcnew System::EventHandler(this, &UpdateWorker::UpdateTraineeButton_Click);
			// 
			// TraineesData
			// 
			this->TraineesData->AllowUserToAddRows = false;
			this->TraineesData->AllowUserToDeleteRows = false;
			this->TraineesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->TraineesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TraineesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn6});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TraineesData->DefaultCellStyle = dataGridViewCellStyle2;
			this->TraineesData->Location = System::Drawing::Point(334, 11);
			this->TraineesData->Name = L"TraineesData";
			this->TraineesData->ReadOnly = true;
			this->TraineesData->Size = System::Drawing::Size(525, 429);
			this->TraineesData->TabIndex = 23;
			// 
			// TraineeSearchButton
			// 
			this->TraineeSearchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeSearchButton->FlatAppearance->BorderSize = 0;
			this->TraineeSearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TraineeSearchButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeSearchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->TraineeSearchButton->Location = System::Drawing::Point(93, 75);
			this->TraineeSearchButton->Name = L"TraineeSearchButton";
			this->TraineeSearchButton->Size = System::Drawing::Size(86, 40);
			this->TraineeSearchButton->TabIndex = 30;
			this->TraineeSearchButton->Text = L"Search";
			this->TraineeSearchButton->UseVisualStyleBackColor = false;
			this->TraineeSearchButton->Click += gcnew System::EventHandler(this, &UpdateWorker::TraineeSearchButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label5->Location = System::Drawing::Point(99, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 23);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Enter ID";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TraineeID
			// 
			this->TraineeID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeID->Location = System::Drawing::Point(65, 33);
			this->TraineeID->Multiline = true;
			this->TraineeID->Name = L"TraineeID";
			this->TraineeID->Size = System::Drawing::Size(155, 30);
			this->TraineeID->TabIndex = 29;
			// 
			// EmployeePanel
			// 
			this->EmployeePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->EmployeePanel->Controls->Add(this->UpdateEmployeePanel);
			this->EmployeePanel->Controls->Add(this->EmployeeDataGridView);
			this->EmployeePanel->Controls->Add(this->EmployeeSearchButton);
			this->EmployeePanel->Controls->Add(this->label10);
			this->EmployeePanel->Controls->Add(this->EmployeeIDBox);
			this->EmployeePanel->Location = System::Drawing::Point(11, 163);
			this->EmployeePanel->Name = L"EmployeePanel";
			this->EmployeePanel->Size = System::Drawing::Size(870, 453);
			this->EmployeePanel->TabIndex = 33;
			this->EmployeePanel->Visible = false;
			this->EmployeePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpdateWorker::EmployeePanel_Paint);
			// 
			// UpdateEmployeePanel
			// 
			this->UpdateEmployeePanel->Controls->Add(this->EmployeePositionBox);
			this->UpdateEmployeePanel->Controls->Add(this->EmployeeHoursBox);
			this->UpdateEmployeePanel->Controls->Add(this->EmployeeAgeBox);
			this->UpdateEmployeePanel->Controls->Add(this->EmployeeNameBox);
			this->UpdateEmployeePanel->Controls->Add(this->label6);
			this->UpdateEmployeePanel->Controls->Add(this->label7);
			this->UpdateEmployeePanel->Controls->Add(this->label8);
			this->UpdateEmployeePanel->Controls->Add(this->label9);
			this->UpdateEmployeePanel->Controls->Add(this->UpdateEmployeeButton);
			this->UpdateEmployeePanel->Location = System::Drawing::Point(6, 121);
			this->UpdateEmployeePanel->Name = L"UpdateEmployeePanel";
			this->UpdateEmployeePanel->Size = System::Drawing::Size(313, 302);
			this->UpdateEmployeePanel->TabIndex = 32;
			this->UpdateEmployeePanel->Visible = false;
			// 
			// EmployeeHoursBox
			// 
			this->EmployeeHoursBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeHoursBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeHoursBox->Location = System::Drawing::Point(135, 101);
			this->EmployeeHoursBox->Multiline = true;
			this->EmployeeHoursBox->Name = L"EmployeeHoursBox";
			this->EmployeeHoursBox->Size = System::Drawing::Size(160, 25);
			this->EmployeeHoursBox->TabIndex = 27;
			// 
			// EmployeeAgeBox
			// 
			this->EmployeeAgeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeAgeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeAgeBox->Location = System::Drawing::Point(97, 59);
			this->EmployeeAgeBox->Multiline = true;
			this->EmployeeAgeBox->Name = L"EmployeeAgeBox";
			this->EmployeeAgeBox->Size = System::Drawing::Size(160, 25);
			this->EmployeeAgeBox->TabIndex = 26;
			// 
			// EmployeeNameBox
			// 
			this->EmployeeNameBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeNameBox->Location = System::Drawing::Point(81, 20);
			this->EmployeeNameBox->Multiline = true;
			this->EmployeeNameBox->Name = L"EmployeeNameBox";
			this->EmployeeNameBox->Size = System::Drawing::Size(160, 25);
			this->EmployeeNameBox->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label6->Location = System::Drawing::Point(8, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 19);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Position";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label7->Location = System::Drawing::Point(8, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Working Hours";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label8->Location = System::Drawing::Point(39, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 19);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Age";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label9->Location = System::Drawing::Point(21, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 19);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Name";
			// 
			// UpdateEmployeeButton
			// 
			this->UpdateEmployeeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->UpdateEmployeeButton->FlatAppearance->BorderSize = 0;
			this->UpdateEmployeeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateEmployeeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpdateEmployeeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->UpdateEmployeeButton->Location = System::Drawing::Point(87, 245);
			this->UpdateEmployeeButton->Name = L"UpdateEmployeeButton";
			this->UpdateEmployeeButton->Size = System::Drawing::Size(118, 49);
			this->UpdateEmployeeButton->TabIndex = 20;
			this->UpdateEmployeeButton->Text = L"Update";
			this->UpdateEmployeeButton->UseVisualStyleBackColor = false;
			this->UpdateEmployeeButton->Click += gcnew System::EventHandler(this, &UpdateWorker::UpdateEmployeeButton_Click);
			// 
			// EmployeeDataGridView
			// 
			this->EmployeeDataGridView->AllowUserToAddRows = false;
			this->EmployeeDataGridView->AllowUserToDeleteRows = false;
			this->EmployeeDataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeeDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->EmployeeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EmployeeDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn8, 
				this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, 
				this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->Column1});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeeDataGridView->DefaultCellStyle = dataGridViewCellStyle4;
			this->EmployeeDataGridView->Location = System::Drawing::Point(334, 11);
			this->EmployeeDataGridView->Name = L"EmployeeDataGridView";
			this->EmployeeDataGridView->ReadOnly = true;
			this->EmployeeDataGridView->Size = System::Drawing::Size(525, 429);
			this->EmployeeDataGridView->TabIndex = 23;
			// 
			// EmployeeSearchButton
			// 
			this->EmployeeSearchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeSearchButton->FlatAppearance->BorderSize = 0;
			this->EmployeeSearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmployeeSearchButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeSearchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->EmployeeSearchButton->Location = System::Drawing::Point(93, 75);
			this->EmployeeSearchButton->Name = L"EmployeeSearchButton";
			this->EmployeeSearchButton->Size = System::Drawing::Size(86, 40);
			this->EmployeeSearchButton->TabIndex = 30;
			this->EmployeeSearchButton->Text = L"Search";
			this->EmployeeSearchButton->UseVisualStyleBackColor = false;
			this->EmployeeSearchButton->Click += gcnew System::EventHandler(this, &UpdateWorker::EmployeeSearchButton_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label10->Location = System::Drawing::Point(99, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 23);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Enter ID";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EmployeeIDBox
			// 
			this->EmployeeIDBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeIDBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeIDBox->Location = System::Drawing::Point(65, 33);
			this->EmployeeIDBox->Multiline = true;
			this->EmployeeIDBox->Name = L"EmployeeIDBox";
			this->EmployeeIDBox->Size = System::Drawing::Size(155, 30);
			this->EmployeeIDBox->TabIndex = 29;
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
			this->EmployeeButton->TabIndex = 10;
			this->EmployeeButton->Text = L"Update Employee";
			this->EmployeeButton->UseVisualStyleBackColor = false;
			this->EmployeeButton->Click += gcnew System::EventHandler(this, &UpdateWorker::EmployeeButton_Click);
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
			this->TraineeButton->TabIndex = 9;
			this->TraineeButton->Text = L"Update Trainee";
			this->TraineeButton->UseVisualStyleBackColor = false;
			this->TraineeButton->Click += gcnew System::EventHandler(this, &UpdateWorker::Trainee_Click);
			// 
			// EmployeePositionBox
			// 
			this->EmployeePositionBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeePositionBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeePositionBox->FormattingEnabled = true;
			this->EmployeePositionBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"CEO", L"Manager", L"Team Leader", L"Team Member"});
			this->EmployeePositionBox->Location = System::Drawing::Point(80, 150);
			this->EmployeePositionBox->Name = L"EmployeePositionBox";
			this->EmployeePositionBox->Size = System::Drawing::Size(160, 27);
			this->EmployeePositionBox->TabIndex = 28;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 50;
			this->dataGridViewTextBoxColumn8->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->FillWeight = 50;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 40;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Salary";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 50;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Hours";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 70;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Position";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 80;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Tax Rate";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Pay Rate";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
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
			// UpdateWorker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->EmployeePanel);
			this->Controls->Add(this->TraineePanel);
			this->Controls->Add(this->EmployeeButton);
			this->Controls->Add(this->TraineeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateWorker";
			this->Text = L"UpdateWorker";
			this->TraineePanel->ResumeLayout(false);
			this->TraineePanel->PerformLayout();
			this->UpdateTraineePanel->ResumeLayout(false);
			this->UpdateTraineePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->EndInit();
			this->EmployeePanel->ResumeLayout(false);
			this->EmployeePanel->PerformLayout();
			this->UpdateEmployeePanel->ResumeLayout(false);
			this->UpdateEmployeePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeeDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion)
	private: System::Void EmployeeButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 UpdateTraineePanel->Visible=false;
				 UpdateEmployeePanel->Visible=false;

			
				
				 Employee ^employee= gcnew Employee;
				 employee->DisplayEmployees(EmployeeDataGridView);

				 TraineePanel->Visible=false;
				 EmployeePanel->Visible = true;
				
				
	

			 }
private: System::Void Trainee_Click(System::Object^  sender, System::EventArgs^  e) {
			 	
				 UpdateTraineePanel->Visible=false;
				 UpdateEmployeePanel->Visible=false;

				 Trainee ^trainee =gcnew Trainee;
				 trainee->DisplayTrainees(TraineesData);
				 
				 TraineePanel->Visible=true;
				 EmployeePanel->Visible = false;

		 }

private: System::Void TraineeSearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	/////////////////////////////////////////
	////////////////////////////////////////
	if (TraineeID->Text=="") {
		MessageBox::Show("ID can not be Empty!");
	}
	else {
		bool Exist = false;
		for (int i = 0; i < TraineesData->RowCount; i++) {

			if (TraineesData->Rows[i]->Cells[0]->Value->ToString() == TraineeID->Text) {
				TraineeNameBox->Text = TraineesData->Rows[i]->Cells[1]->Value->ToString();
				TraineeAgeBox->Text = TraineesData->Rows[i]->Cells[2]->Value->ToString();
				TraineeFacultyBox->Text = TraineesData->Rows[i]->Cells[4]->Value->ToString();
				TraineeYearBox->Text = TraineesData->Rows[i]->Cells[5]->Value->ToString();
				TraineeGPABox->Text = TraineesData->Rows[i]->Cells[6]->Value->ToString();


				UpdateTraineePanel->Visible = true;

				GlobalID = TraineesData->Rows[i]->Cells[0]->Value->ToString();

				Exist = true;
				break;

			}



		}
		if (!Exist)
			MessageBox::Show("Invalid ID");
	}
		 }
private: System::Void EmployeeSearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	/////////////////////////////////
	/////////////////////////////////////
	if (EmployeeIDBox->Text=="") {
		MessageBox::Show("ID can not be Empty! ");
		   }
	else {
		bool Exist = false;
		for (int i = 0; i < EmployeeDataGridView->RowCount; i++) {
			if (EmployeeDataGridView->Rows[i]->Cells[0]->Value->ToString() == EmployeeIDBox->Text) {
				EmployeeNameBox->Text = EmployeeDataGridView->Rows[i]->Cells[1]->Value->ToString();
				EmployeeAgeBox->Text = EmployeeDataGridView->Rows[i]->Cells[2]->Value->ToString();
				EmployeeHoursBox->Text = EmployeeDataGridView->Rows[i]->Cells[4]->Value->ToString();
				EmployeePositionBox->Text = EmployeeDataGridView->Rows[i]->Cells[5]->Value->ToString();
				UpdateEmployeePanel->Visible = true;
				GlobalID = EmployeeDataGridView->Rows[i]->Cells[0]->Value->ToString();

				Exist = true;
				break;

			}



		}
		if (!Exist)
			MessageBox::Show("Invalid ID");
	}

		 }
private: System::Void UpdateEmployeeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	/////////////////////////////////////////
	////////////////////////////////////////
	if (EmployeeNameBox->Text==""|| EmployeeAgeBox->Text==""|| EmployeeHoursBox->Text==""|| EmployeePositionBox->Text=="") {
		MessageBox::Show("Fields can not be Empty! ");
			 }
	else {
		String^ Name = gcnew String((char*)Marshal::StringToHGlobalAnsi(EmployeeNameBox->Text).ToPointer());
		int Age = Convert::ToInt32(EmployeeAgeBox->Text);
		int Hours = Convert::ToInt32(EmployeeHoursBox->Text);
		String^ Position = gcnew String((char*)Marshal::StringToHGlobalAnsi(EmployeePositionBox->Text).ToPointer());
		Employee ^employee = gcnew Employee(GlobalID, Name, Age, Hours, Position);

		employee->EditEmployee(GlobalID, employee);
		employee->DisplayEmployees(EmployeeDataGridView);
	}
		 }
private: System::Void UpdateTraineeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//////////////////////////////////////////////////////
	///////////////////////////////////////////////////////
	if (TraineeNameBox->Text==""|| TraineeAgeBox->Text==""|| TraineeFacultyBox->Text==""|| TraineeYearBox->Text==""|| TraineeGPABox->Text=="") {
		MessageBox::Show("Fields can not be Empty!");
	}
	else {

		String^ Name = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeNameBox->Text).ToPointer());
		int Age = Convert::ToInt32(TraineeAgeBox->Text);
		String^ Faculty = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeFacultyBox->Text).ToPointer());
		String ^ Year = gcnew String((char*)Marshal::StringToHGlobalAnsi(TraineeYearBox->Text).ToPointer());
		float GPA = (float)Convert::ToDouble(TraineeGPABox->Text);
		Trainee ^trainee = gcnew Trainee(GlobalID, Name, Age, Faculty, Year, GPA);
		trainee->EditTrainee(GlobalID, trainee);
		trainee->DisplayTrainees(TraineesData);

	}

		 }
private: System::Void EmployeePanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}

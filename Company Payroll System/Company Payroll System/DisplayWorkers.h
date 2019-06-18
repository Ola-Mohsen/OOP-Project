#pragma once
#include"Worker.h"
#include"Employee.h"
#include"Trainee.h"
namespace CompanyPayrollSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
using namespace System::IO;  

	/// <summary>
	/// Summary for DisplayWorkers
	/// </summary>
	public ref class DisplayWorkers : public System::Windows::Forms::Form
	{
	public:
		DisplayWorkers(void)
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
		~DisplayWorkers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Employees;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  Trainees;
	protected: 

	private: System::Windows::Forms::DataGridView^  EmployeesData;








	private: System::Windows::Forms::DataGridView^  TraineesData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  A;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hours;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tax;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pay;
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
			this->Employees = (gcnew System::Windows::Forms::Button());
			this->Trainees = (gcnew System::Windows::Forms::Button());
			this->EmployeesData = (gcnew System::Windows::Forms::DataGridView());
			this->TraineesData = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeesData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->BeginInit();
			this->SuspendLayout();
			// 
			// Employees
			// 
			this->Employees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Employees->FlatAppearance->BorderSize = 0;
			this->Employees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Employees->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Employees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Employees->Location = System::Drawing::Point(191, 40);
			this->Employees->Name = L"Employees";
			this->Employees->Size = System::Drawing::Size(188, 73);
			this->Employees->TabIndex = 3;
			this->Employees->Text = L"Display Employees";
			this->Employees->UseVisualStyleBackColor = false;
			this->Employees->Click += gcnew System::EventHandler(this, &DisplayWorkers::Employees_Click);
			// 
			// Trainees
			// 
			this->Trainees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Trainees->FlatAppearance->BorderSize = 0;
			this->Trainees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Trainees->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Trainees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Trainees->Location = System::Drawing::Point(521, 40);
			this->Trainees->Name = L"Trainees";
			this->Trainees->Size = System::Drawing::Size(188, 73);
			this->Trainees->TabIndex = 2;
			this->Trainees->Text = L"Display Tainees";
			this->Trainees->UseVisualStyleBackColor = false;
			this->Trainees->Click += gcnew System::EventHandler(this, &DisplayWorkers::Trainees_Click);
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
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeesData->DefaultCellStyle = dataGridViewCellStyle2;
			this->EmployeesData->Location = System::Drawing::Point(83, 135);
			this->EmployeesData->Name = L"EmployeesData";
			this->EmployeesData->ReadOnly = true;
			this->EmployeesData->Size = System::Drawing::Size(758, 477);
			this->EmployeesData->TabIndex = 4;
			this->EmployeesData->Visible = false;
			// 
			// TraineesData
			// 
			this->TraineesData->AllowUserToAddRows = false;
			this->TraineesData->AllowUserToDeleteRows = false;
			this->TraineesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->TraineesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TraineesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn6});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TraineesData->DefaultCellStyle = dataGridViewCellStyle4;
			this->TraineesData->Location = System::Drawing::Point(83, 135);
			this->TraineesData->Name = L"TraineesData";
			this->TraineesData->ReadOnly = true;
			this->TraineesData->Size = System::Drawing::Size(758, 477);
			this->TraineesData->TabIndex = 5;
			this->TraineesData->Visible = false;
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
			this->dataGridViewTextBoxColumn2->Width = 140;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->FillWeight = 50;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 55;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Salary";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 70;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Faculty";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 145;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Academic Year";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 180;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"GPA";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 80;
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
			this->N->Width = 140;
			// 
			// A
			// 
			this->A->FillWeight = 50;
			this->A->HeaderText = L"Age";
			this->A->Name = L"A";
			this->A->ReadOnly = true;
			this->A->Width = 50;
			// 
			// S
			// 
			this->S->HeaderText = L"Salary";
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 70;
			// 
			// Hours
			// 
			this->Hours->HeaderText = L"Working Hours";
			this->Hours->Name = L"Hours";
			this->Hours->ReadOnly = true;
			this->Hours->Width = 145;
			// 
			// Pos
			// 
			this->Pos->HeaderText = L"Position";
			this->Pos->Name = L"Pos";
			this->Pos->ReadOnly = true;
			this->Pos->Width = 85;
			// 
			// Tax
			// 
			this->Tax->HeaderText = L"Tax Rate";
			this->Tax->Name = L"Tax";
			this->Tax->ReadOnly = true;
			this->Tax->Width = 90;
			// 
			// Pay
			// 
			this->Pay->HeaderText = L"Pay Rate";
			this->Pay->Name = L"Pay";
			this->Pay->ReadOnly = true;
			this->Pay->Width = 90;
			// 
			// DisplayWorkers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->TraineesData);
			this->Controls->Add(this->EmployeesData);
			this->Controls->Add(this->Employees);
			this->Controls->Add(this->Trainees);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DisplayWorkers";
			this->Text = L"DisplayWorkers";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeesData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Employees_Click(System::Object^  sender, System::EventArgs^  e) {



				
			
		
				 TraineesData->Visible=false;
				 EmployeesData->Visible= true;
				 Employee ^employee =gcnew Employee;
				 employee->DisplayEmployees(EmployeesData);


				

			

		 }
private: System::Void Trainees_Click(System::Object^  sender, System::EventArgs^  e) {

				 TraineesData->Visible=true;
				 EmployeesData->Visible= false;
				 Trainee ^trainee =gcnew Trainee;
				 trainee->DisplayTrainees(TraineesData);

				
		 }
};
}

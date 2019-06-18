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

	/// <summary>
	/// Summary for DeleteWorker
	/// </summary>
	public ref class DeleteWorker : public System::Windows::Forms::Form
	{
		bool WorkerEmployeeType;
	public:
		DeleteWorker(void)
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
		~DeleteWorker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  EmployeesBox;
	private: System::Windows::Forms::Button^  TraineeBox;
	private: System::Windows::Forms::Button^  DeleteBox;
	private: System::Windows::Forms::TextBox^  IDBox;
	private: System::Windows::Forms::Label^  IDLabel;

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







	protected: 























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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->EmployeesBox = (gcnew System::Windows::Forms::Button());
			this->TraineeBox = (gcnew System::Windows::Forms::Button());
			this->DeleteBox = (gcnew System::Windows::Forms::Button());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
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
			// EmployeesBox
			// 
			this->EmployeesBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeesBox->FlatAppearance->BorderSize = 0;
			this->EmployeesBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmployeesBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeesBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->EmployeesBox->Location = System::Drawing::Point(191, 40);
			this->EmployeesBox->Name = L"EmployeesBox";
			this->EmployeesBox->Size = System::Drawing::Size(188, 73);
			this->EmployeesBox->TabIndex = 5;
			this->EmployeesBox->Text = L"Delete Employees";
			this->EmployeesBox->UseVisualStyleBackColor = false;
			this->EmployeesBox->Click += gcnew System::EventHandler(this, &DeleteWorker::EmployeesBox_Click);
			// 
			// TraineeBox
			// 
			this->TraineeBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeBox->FlatAppearance->BorderSize = 0;
			this->TraineeBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TraineeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->TraineeBox->Location = System::Drawing::Point(521, 40);
			this->TraineeBox->Name = L"TraineeBox";
			this->TraineeBox->Size = System::Drawing::Size(188, 73);
			this->TraineeBox->TabIndex = 4;
			this->TraineeBox->Text = L"Delete Tainees";
			this->TraineeBox->UseVisualStyleBackColor = false;
			this->TraineeBox->Click += gcnew System::EventHandler(this, &DeleteWorker::TraineeBox_Click);
			// 
			// DeleteBox
			// 
			this->DeleteBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->DeleteBox->FlatAppearance->BorderSize = 0;
			this->DeleteBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DeleteBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->DeleteBox->Location = System::Drawing::Point(86, 273);
			this->DeleteBox->Name = L"DeleteBox";
			this->DeleteBox->Size = System::Drawing::Size(109, 40);
			this->DeleteBox->TabIndex = 28;
			this->DeleteBox->Text = L"Delete";
			this->DeleteBox->UseVisualStyleBackColor = false;
			this->DeleteBox->Visible = false;
			this->DeleteBox->Click += gcnew System::EventHandler(this, &DeleteWorker::DeleteBox_Click);
			// 
			// IDBox
			// 
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->IDBox->Location = System::Drawing::Point(101, 219);
			this->IDBox->Multiline = true;
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(160, 25);
			this->IDBox->TabIndex = 27;
			this->IDBox->Visible = false;
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->IDLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->IDLabel->Location = System::Drawing::Point(42, 219);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(28, 23);
			this->IDLabel->TabIndex = 26;
			this->IDLabel->Text = L"ID";
			this->IDLabel->Visible = false;
			// 
			// EmployeesData
			// 
			this->EmployeesData->AllowUserToAddRows = false;
			this->EmployeesData->AllowUserToDeleteRows = false;
			this->EmployeesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->EmployeesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EmployeesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->id, this->N, 
				this->A, this->S, this->Hours, this->Pos, this->Tax, this->Pay});
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeesData->DefaultCellStyle = dataGridViewCellStyle18;
			this->EmployeesData->Location = System::Drawing::Point(309, 176);
			this->EmployeesData->Name = L"EmployeesData";
			this->EmployeesData->ReadOnly = true;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeesData->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeesData->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->EmployeesData->Size = System::Drawing::Size(545, 430);
			this->EmployeesData->TabIndex = 25;
			this->EmployeesData->Visible = false;
			// 
			// TraineesData
			// 
			this->TraineesData->AllowUserToAddRows = false;
			this->TraineesData->AllowUserToDeleteRows = false;
			this->TraineesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->TraineesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TraineesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn6});
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TraineesData->DefaultCellStyle = dataGridViewCellStyle22;
			this->TraineesData->Location = System::Drawing::Point(309, 176);
			this->TraineesData->Name = L"TraineesData";
			this->TraineesData->ReadOnly = true;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->RowHeadersDefaultCellStyle = dataGridViewCellStyle23;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineesData->RowsDefaultCellStyle = dataGridViewCellStyle24;
			this->TraineesData->Size = System::Drawing::Size(545, 438);
			this->TraineesData->TabIndex = 29;
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
			this->dataGridViewTextBoxColumn5->Width = 145;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Academic Year";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 80;
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
			this->S->Width = 55;
			// 
			// Hours
			// 
			this->Hours->HeaderText = L"Hours";
			this->Hours->Name = L"Hours";
			this->Hours->ReadOnly = true;
			this->Hours->Width = 65;
			// 
			// Pos
			// 
			this->Pos->HeaderText = L"Position";
			this->Pos->Name = L"Pos";
			this->Pos->ReadOnly = true;
			this->Pos->Width = 95;
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
			// DeleteWorker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->TraineesData);
			this->Controls->Add(this->DeleteBox);
			this->Controls->Add(this->IDBox);
			this->Controls->Add(this->IDLabel);
			this->Controls->Add(this->EmployeesData);
			this->Controls->Add(this->EmployeesBox);
			this->Controls->Add(this->TraineeBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DeleteWorker";
			this->Text = L"DeleteWorker";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeesData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EmployeesBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 WorkerEmployeeType = true;
				 IDLabel->Visible =true;
				 IDBox->Visible =true;
				 DeleteBox->Visible =true;

				 Employee ^employee = gcnew Employee;
				 employee->DisplayEmployees(EmployeesData);


				 EmployeesData->Visible = true;
				 TraineesData->Visible=false;

				 
			 }
private: System::Void TraineeBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 WorkerEmployeeType = false;
			  IDLabel->Visible =true;
			 IDBox->Visible =true;
			 DeleteBox->Visible =true;

			 Trainee ^trainee = gcnew Trainee;
			 trainee->DisplayTrainees(TraineesData);


			  EmployeesData->Visible = false;
			TraineesData->Visible=true;



		 }

private: System::Void DeleteBox_Click(System::Object^  sender, System::EventArgs^  e) {
	/////////////////////////////////////////
	/////////////////////////////////////////
	          if (IDBox->Text == "") {
		         MessageBox::Show("ID can not be Empty! ");

	          }

			  else {

				  if (WorkerEmployeeType)
				  {


					  Employee ^employee = gcnew Employee;
					  if (!employee->DeleteEmployee(IDBox->Text))
					  {
						  IDBox->Text = "";
					  }
					  else
					  {
						  employee->DisplayEmployees(EmployeesData);
						  IDBox->Text = "";
					  }

				  }
				  else
				  {
					  Trainee ^trainee = gcnew Trainee;

					  if (!trainee->DeleteTrainee(IDBox->Text))
					  {
						  IDBox->Text = "";
					  }
					  else
					  {
						  trainee->DisplayTrainees(TraineesData);
						  IDBox->Text = "";
					  }


				  }
			  }


			 
		 }
			
};
}

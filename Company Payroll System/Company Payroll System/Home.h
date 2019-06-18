#pragma once
#include "AddWorker.h"
#include"Worker.h"
#include"DisplayWorkers.h"
#include"Trainee.h"
#include"UpdateWorker.h"
#include"DeleteWorker.h"
namespace CompanyPayrollSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Home
/// </summary>


	public ref class Home : public System::Windows::Forms::Form
	{

	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}


	protected: 







	private: System::Windows::Forms::Button^  AddButton;




	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Button^  DeleteButton;
	private: System::Windows::Forms::Button^  DisplayButton;
	private: System::Windows::Forms::Button^  UpdateButton;





	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;





	private: System::Windows::Forms::Button^  CloseButton;
	private: System::Windows::Forms::Panel^  HomePanel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  Update;
	private: System::Windows::Forms::PictureBox^  Workers;
	private: System::Windows::Forms::PictureBox^  Delete;
	private: System::Windows::Forms::PictureBox^  Add;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;












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
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->DisplayButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->HomePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Update = (gcnew System::Windows::Forms::PictureBox());
			this->Workers = (gcnew System::Windows::Forms::PictureBox());
			this->Delete = (gcnew System::Windows::Forms::PictureBox());
			this->Add = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->HomePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Update))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Workers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Delete))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Add))->BeginInit();
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"AddButton.BackgroundImage")));
			this->AddButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AddButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), 
				static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->AddButton->FlatAppearance->BorderSize = 0;
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Location = System::Drawing::Point(42, 20);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(140, 80);
			this->AddButton->TabIndex = 2;
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &Home::AddButton_Click);
			this->AddButton->MouseLeave += gcnew System::EventHandler(this, &Home::AddButton_MouseLeave);
			this->AddButton->MouseHover += gcnew System::EventHandler(this, &Home::AddButton_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label3->Location = System::Drawing::Point(48, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Add Worker";
			// 
			// DeleteButton
			// 
			this->DeleteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DeleteButton.BackgroundImage")));
			this->DeleteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DeleteButton->FlatAppearance->BorderSize = 0;
			this->DeleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteButton->Location = System::Drawing::Point(492, 20);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(140, 80);
			this->DeleteButton->TabIndex = 7;
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Home::DeleteButton_Click);
			this->DeleteButton->MouseLeave += gcnew System::EventHandler(this, &Home::DeleteButton_MouseLeave);
			this->DeleteButton->MouseHover += gcnew System::EventHandler(this, &Home::DeleteButton_MouseHover);
			// 
			// DisplayButton
			// 
			this->DisplayButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DisplayButton.BackgroundImage")));
			this->DisplayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DisplayButton->FlatAppearance->BorderSize = 0;
			this->DisplayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DisplayButton->Location = System::Drawing::Point(717, 20);
			this->DisplayButton->Name = L"DisplayButton";
			this->DisplayButton->Size = System::Drawing::Size(136, 79);
			this->DisplayButton->TabIndex = 8;
			this->DisplayButton->UseVisualStyleBackColor = true;
			this->DisplayButton->Click += gcnew System::EventHandler(this, &Home::DisplayButton_Click);
			this->DisplayButton->MouseLeave += gcnew System::EventHandler(this, &Home::DisplayButton_MouseLeave);
			this->DisplayButton->MouseHover += gcnew System::EventHandler(this, &Home::DisplayButton_MouseHover);
			// 
			// UpdateButton
			// 
			this->UpdateButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"UpdateButton.BackgroundImage")));
			this->UpdateButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->UpdateButton->FlatAppearance->BorderSize = 0;
			this->UpdateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateButton->Location = System::Drawing::Point(267, 20);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(140, 80);
			this->UpdateButton->TabIndex = 6;
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Home::UpdateButton_Click);
			this->UpdateButton->MouseLeave += gcnew System::EventHandler(this, &Home::UpdateButton_MouseLeave);
			this->UpdateButton->MouseHover += gcnew System::EventHandler(this, &Home::UpdateButton_MouseHover);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label4->Location = System::Drawing::Point(259, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Update Worker";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label5->Location = System::Drawing::Point(486, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Delete Worker";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label6->Location = System::Drawing::Point(703, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Display Workers";
			// 
			// CloseButton
			// 
			this->CloseButton->FlatAppearance->BorderSize = 0;
			this->CloseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CloseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->CloseButton->Location = System::Drawing::Point(868, -3);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(32, 31);
			this->CloseButton->TabIndex = 12;
			this->CloseButton->Text = L"X";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &Home::CloseButton_Click);
			// 
			// HomePanel
			// 
			this->HomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HomePanel.BackgroundImage")));
			this->HomePanel->Controls->Add(this->label1);
			this->HomePanel->Controls->Add(this->pictureBox1);
			this->HomePanel->Controls->Add(this->Update);
			this->HomePanel->Controls->Add(this->Workers);
			this->HomePanel->Controls->Add(this->Delete);
			this->HomePanel->Controls->Add(this->Add);
			this->HomePanel->Controls->Add(this->label2);
			this->HomePanel->Location = System::Drawing::Point(0, 146);
			this->HomePanel->Name = L"HomePanel";
			this->HomePanel->Size = System::Drawing::Size(900, 650);
			this->HomePanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(99)), 
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->label1->Location = System::Drawing::Point(238, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 36);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Company Payroll";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(488, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(95, 58);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// Update
			// 
			this->Update->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Update.BackgroundImage")));
			this->Update->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Update->Location = System::Drawing::Point(654, 218);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(117, 96);
			this->Update->TabIndex = 9;
			this->Update->TabStop = false;
			this->Update->Visible = false;
			// 
			// Workers
			// 
			this->Workers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Workers.BackgroundImage")));
			this->Workers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Workers->Location = System::Drawing::Point(635, 98);
			this->Workers->Name = L"Workers";
			this->Workers->Size = System::Drawing::Size(117, 96);
			this->Workers->TabIndex = 8;
			this->Workers->TabStop = false;
			this->Workers->Visible = false;
			// 
			// Delete
			// 
			this->Delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Delete.BackgroundImage")));
			this->Delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Delete->Location = System::Drawing::Point(86, 164);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(117, 96);
			this->Delete->TabIndex = 7;
			this->Delete->TabStop = false;
			this->Delete->Visible = false;
			// 
			// Add
			// 
			this->Add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Add.BackgroundImage")));
			this->Add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Add->Location = System::Drawing::Point(89, 42);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(117, 96);
			this->Add->TabIndex = 6;
			this->Add->TabStop = false;
			this->Add->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label2->Location = System::Drawing::Point(484, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"System";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 150);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 450);
			this->panel1->TabIndex = 0;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(3) {this->lineShape3, 
				this->lineShape2, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(900, 750);
			this->shapeContainer1->TabIndex = 13;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape3
			// 
			this->lineShape3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->lineShape3->BorderWidth = 2;
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = 675;
			this->lineShape3->X2 = 675;
			this->lineShape3->Y1 = -48;
			this->lineShape3->Y2 = 147;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->lineShape2->BorderWidth = 2;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 450;
			this->lineShape2->X2 = 450;
			this->lineShape2->Y1 = -12;
			this->lineShape2->Y2 = 170;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(49)), 
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->lineShape1->BorderWidth = 2;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 225;
			this->lineShape1->X2 = 225;
			this->lineShape1->Y1 = -1;
			this->lineShape1->Y2 = 146;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(195)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 750);
			this->Controls->Add(this->HomePanel);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DisplayButton);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->shapeContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->Text = L"Home";
			this->HomePanel->ResumeLayout(false);
			this->HomePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Update))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Workers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Delete))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Add))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
				  System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->AddButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Add.BackgroundImage")));
				 			this->AddButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

							AddWorker ^a = gcnew AddWorker;

							
							a->TopLevel = false;
							this->HomePanel->Controls->Clear();

							this->HomePanel->Controls->Add(a);
							label1->Visible =false;
							label2->Visible =false;
							pictureBox1->Visible = false;

							a->Show();
			

			 }


    private: System::Void AddButton_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->AddButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Add.BackgroundImage")));
				 			this->AddButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			 }

			 

    private: System::Void AddButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->AddButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"AddButton.BackgroundImage")));
				 			this->AddButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			 }

         private: System::Void DeleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
					    System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
						this->DeleteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Delete.BackgroundImage")));
				 			this->DeleteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
							DeleteWorker ^D = gcnew DeleteWorker;
							D->TopLevel = false;
							this->HomePanel->Controls->Clear();
							this->HomePanel->Controls->Add(D);

							label1->Visible =false;
							label2->Visible =false;
							pictureBox1->Visible = false;

							D->Show();

		 }

		 private: System::Void DeleteButton_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->DeleteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Delete.BackgroundImage")));
				 			this->DeleteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }

		 private: System::Void DeleteButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->DeleteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DeleteButton.BackgroundImage")));
				 			this->DeleteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }




	     private: System::Void DisplayButton_Click(System::Object^  sender, System::EventArgs^  e) {
					    System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
						this->DisplayButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Workers.BackgroundImage")));
				 			this->DisplayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

							DisplayWorkers ^D = gcnew DisplayWorkers;
							D->TopLevel = false;
							this->HomePanel->Controls->Clear();
							this->HomePanel->Controls->Add(D);

							label1->Visible =false;
							label2->Visible =false;
							pictureBox1->Visible = false;

							D->Show();
							
		 }

		 private: System::Void DisplayButton_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->DisplayButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Workers.BackgroundImage")));
				 			this->DisplayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }

		 private: System::Void DisplayButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
					   this->DisplayButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"DisplayButton.BackgroundImage")));
				 			this->DisplayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }


          private: System::Void UpdateButton_Click(System::Object^  sender, System::EventArgs^  e) {
					    System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
						this->UpdateButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Update.BackgroundImage")));
				 			this->UpdateButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

							UpdateWorker ^D = gcnew UpdateWorker;
							D->TopLevel = false;
							this->HomePanel->Controls->Clear();
							this->HomePanel->Controls->Add(D);

							label1->Visible =false;
							label2->Visible =false;
							pictureBox1->Visible = false;

							D->Show();
		 }

		 private: System::Void UpdateButton_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
				 this->UpdateButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Update.BackgroundImage")));
				 			this->UpdateButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }

		 private: System::Void UpdateButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
					   System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
					   this->UpdateButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"UpdateButton.BackgroundImage")));
				 			this->UpdateButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 }






private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			Employee::WritetoFile();
			Trainee::WritetoFile();

			 this->Close();
		 }

};
}

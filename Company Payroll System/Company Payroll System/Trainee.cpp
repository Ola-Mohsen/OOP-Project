#include<iostream>
#include "string.h"
#include "Worker.h"
#include"Trainee.h"
using namespace System;
using namespace std;
using namespace System::Collections::Generic;
Trainee::Trainee() {
	ID = gcnew String(" ");
	Name = gcnew String(" ");
	AcademicYear = gcnew String(" ");
	FacultyName = gcnew String(" ");

}
Trainee::Trainee(String^ ID, String^Name, int Age, String^ FacultyName, String^ AcademicYear, float GPA) {
	this->ID = ID;
	this->Name = Name;
	this->Age = Age;
	this->FacultyName = FacultyName;
	this->GPA = GPA;
	this->AcademicYear = AcademicYear;
	this->CalculateSalary();

}
void Trainee::FillMap()
{
		String^ f = "Trainees.txt"; 
		StreamReader^ din = File::OpenText(f);
		String^ str;  

		while ((str = din->ReadLine()) != nullptr)   
			{
					array<String^>^ words;
					words = str->Split('@');  

					
						
					Trainee ^trainee = gcnew Trainee(words[0],words[1],Convert::ToInt32(words[2]),words[4],words[5], (float)Convert::ToDouble(words[6]));
					TraineessData->Add(words[0],trainee);
					


			}
}

void Trainee::WritetoFile()
{
		String^ fileName = "Trainees.txt";  
        StreamWriter^ sw = gcnew StreamWriter(fileName);

		for each (KeyValuePair<String ^,Trainee ^> trainee in TraineessData)
				{	
						sw->Write(trainee.Value->ID);
						sw->Write("@");

						sw->Write(trainee.Value->Name);
						sw->Write("@");

						sw->Write(String::Format("{0:0}",trainee.Value->Age));
						sw->Write("@");
		
						sw->Write(String::Format("{0:0}",trainee.Value->Salary));
						sw->Write("@");

						sw->Write(trainee.Value->FacultyName);
						sw->Write("@");

						sw->Write(trainee.Value->AcademicYear);
						sw->Write("@");

					

						sw->WriteLine(String::Format("{0:0.0}",trainee.Value->GPA));
				}
			sw->Close();
}



void Trainee::CalculateSalary() {
	this->Salary = 500;
}

bool Trainee::AddTrainee(Trainee ^trainee) 
{
	if(TraineessData->ContainsKey(trainee->ID))
		{
		
			MessageBox::Show("Used ID, Please Write another");
			return false;
		}
		else
		{
			TraineessData->Add(trainee->ID,trainee);
			MessageBox::Show("successfully added");
			return true;
		}

	
}
bool Trainee::DeleteTrainee(String ^id) 
{
	if(!TraineessData->ContainsKey(id))
	{
		MessageBox::Show("Invalid ID");
		return false;
	}
	else
	{
		TraineessData->Remove(id);
		MessageBox::Show("Successfully Deleted");
		return true;
	
	}
}
void Trainee::DisplayTrainees(DataGridView ^TraineesViewer) 
{
			TraineesViewer->Rows->Clear();

			for each (KeyValuePair<String ^,Trainee ^> trainee in TraineessData)
					{						

						int index = TraineesViewer->Rows->Add();

						 TraineesViewer->Rows[index]->Cells[0]->Value = trainee.Value->ID;
						 TraineesViewer->Rows[index]->Cells[1]->Value = trainee.Value->Name;
					     TraineesViewer->Rows[index]->Cells[2]->Value = trainee.Value->Age;
						 TraineesViewer->Rows[index]->Cells[3]->Value = trainee.Value->Salary;
						 TraineesViewer->Rows[index]->Cells[4]->Value = trainee.Value->FacultyName;
						 TraineesViewer->Rows[index]->Cells[5]->Value = trainee.Value->AcademicYear;
						 TraineesViewer->Rows[index]->Cells[6]->Value = trainee.Value->GPA;
					}


}
void Trainee::EditTrainee(String ^id,Trainee ^trainee) 
{
	TraineessData[id] = trainee;
	MessageBox::Show("Successfully Updated");
}

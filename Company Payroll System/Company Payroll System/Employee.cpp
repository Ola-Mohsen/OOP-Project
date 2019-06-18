#include"Employee.h"
#include<iostream>
#include"string.h"
#include<fstream>
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
Employee::Employee() {
	ID = gcnew String(" ");
	Name= gcnew String(" ");
	Age = 0;
	Salary = 0;
	WorkingHours = 0;
}
Employee::Employee(String^ ID, String^ Name, int Age, int WorkingHours , String^position) {
	this->ID = ID;
	this->Name = Name;
	this->Salary = Salary;
	this->Age = Age;
	this->WorkingHours = WorkingHours;
	this->grade = gcnew Grade(position);
	this->grade->SetPosition(position);
	if(position=="CEO")
	{
		this->grade->SetTaxRate(0.3);
		this->grade->SetPayRate(50);
	
	}
	else if(position=="Manager")
	{
		this->grade->SetTaxRate(0.2);
		this->grade->SetPayRate(40);
	
	}
	else if(position=="Team Leader")
	{
		this->grade->SetTaxRate(0.15);
		this->grade->SetPayRate(30);
	
	}
	else if(position=="Team Member")
	{
		this->grade->SetTaxRate(0.1);
		this->grade->SetPayRate(20);
	
	}
	CalculateSalary();
}
void Employee::FillMap()
{
		String^ f = "Employees.txt"; 
		StreamReader^ din = File::OpenText(f);
		String^ str;  
						

		while ((str = din->ReadLine()) != nullptr)   
			{
					array<String^>^ words;
					words = str->Split('@');  
						
					
					Employee ^employee = gcnew Employee(words[0],words[1],Convert::ToInt32(words[2]),Convert::ToInt32(words[4]),words[5]);
					EmployeesData->Add(words[0],employee);


			}
}
void Employee::WritetoFile()
{
		String^ fileName = "Employees.txt";  
        StreamWriter^ sw = gcnew StreamWriter(fileName);

			for each (KeyValuePair<String ^,Employee ^> emp in EmployeesData)
				{	
						sw->Write(emp.Value->ID);
						sw->Write("@");

						sw->Write(emp.Value->Name);
						sw->Write("@");

						sw->Write(String::Format("{0:0}",emp.Value->Age));
						sw->Write("@");
		
						sw->Write(String::Format("{0:0}",emp.Value->Salary));
						sw->Write("@");

						sw->Write(String::Format("{0:0}",emp.Value->WorkingHours));
						sw->Write("@");

						sw->Write(emp.Value->grade->GetPostition());
						sw->Write("@");

						sw->Write(String::Format("{0:0.0}",emp.Value->grade->GetTaxRate()));
						sw->Write("@");

						sw->WriteLine(String::Format("{0:0.0}",emp.Value->grade->GetPayRate()));
		
				}
			sw->Close();
}



void Employee::CalculateSalary() {
	this->Salary= (int) ((float)(this->grade->GetPayRate()*this->WorkingHours)-(float)(this->grade->GetTaxRate()*(float)(this->grade->GetPayRate()*(float)this->WorkingHours)));
}

bool Employee::AddEmployee(Employee ^employee) {

    	if(EmployeesData->ContainsKey(employee->ID))
		{
		
			MessageBox::Show("Used ID, Please Write another");
			return false;

		}
		else
		{
			EmployeesData->Add(employee->ID,employee);
			MessageBox::Show("successfully added");
			return true;
		}

}
bool Employee::DeleteEmployee(String ^id) {
	if(!EmployeesData->ContainsKey(id))
	{
		MessageBox::Show("Invalid ID");
		return false;
	}
	else
	{
		EmployeesData->Remove(id);
		MessageBox::Show("Successfully Deleted");
		return true;
	
	}


}
void Employee::DisplayEmployees(DataGridView ^EmployeesViewer) {
			EmployeesViewer->Rows->Clear();
			int c=0;
			for each (KeyValuePair<String ^,Employee ^> employee in EmployeesData)
					{						

						  int index = EmployeesViewer->Rows->Add();

						 EmployeesViewer->Rows[c]->Cells[0]->Value = employee.Value->ID;
						 EmployeesViewer->Rows[c]->Cells[1]->Value = employee.Value->Name;
					     EmployeesViewer->Rows[c]->Cells[2]->Value = employee.Value->Age;
						 EmployeesViewer->Rows[c]->Cells[3]->Value = employee.Value->Salary;
						 EmployeesViewer->Rows[c]->Cells[4]->Value = employee.Value->WorkingHours;
						 EmployeesViewer->Rows[c]->Cells[5]->Value = employee.Value->grade->GetPostition();
						 EmployeesViewer->Rows[c]->Cells[6]->Value = employee.Value->grade->GetTaxRate();
				    	 EmployeesViewer->Rows[c]->Cells[7]->Value = employee.Value->grade->GetPayRate();
						 c++;

					}
}
void Employee::EditEmployee(String ^id,Employee ^employee) {

	EmployeesData[id] =employee;
	MessageBox::Show("Successfully Updated");
}


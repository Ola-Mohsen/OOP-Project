#pragma once
#include"Grade.h"
#include"Worker.h"
#include<iostream>
#include"string.h"
using namespace std;
using namespace System;
ref class Employee : Worker
{
private:
	int WorkingHours;
	Grade ^grade;
	static Dictionary<String ^,Employee ^> ^EmployeesData=gcnew Dictionary<String ^,Employee ^>;


public:
	Employee();
	Employee(String^, String^,int, int, String^);
	virtual void CalculateSalary()override;
	static void FillMap();
	static void WritetoFile();
	bool AddEmployee(Employee ^);
	void DisplayEmployees(DataGridView ^);
	bool DeleteEmployee(String^);
	void EditEmployee(String ^,Employee ^);
};


#pragma once
#include<iostream>
#include "string.h"
#include "Worker.h"
using namespace System;
using namespace std;

ref class Trainee:Worker
{
	String ^ FacultyName, ^ AcademicYear;
	float GPA;
	static Dictionary<String ^,Trainee ^> ^TraineessData=gcnew Dictionary<String ^,Trainee ^>;


public:
	Trainee();
	Trainee(String^, String^, int, String^, String^,float);
	virtual void CalculateSalary()override;
	static void FillMap();
	static void WritetoFile();
	bool AddTrainee(Trainee ^);
	void DisplayTrainees(DataGridView ^);
	bool DeleteTrainee(String^);
	void EditTrainee(String ^,Trainee ^);
};


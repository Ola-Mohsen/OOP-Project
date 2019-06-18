#include "Home.h"
#include"Employee.h"
#include"Trainee.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;  
using namespace System::Collections::Generic;
#include<string>


#pragma once


[STAThread]

void main()
{
	
	Employee::FillMap();
	Trainee::FillMap();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CompanyPayrollSystem::Home home;
	Application::Run(%home);
}
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;  
using namespace System::Collections::Generic;
#include"stddef.h"

#pragma once
#include<iostream>
#include"string.h"
using namespace std;
using namespace System;
ref class Worker abstract
{
protected:
	String ^ID, ^Name;
	int Age;
	int  Salary;
public:

	Worker();
	virtual void CalculateSalary() =0;
};







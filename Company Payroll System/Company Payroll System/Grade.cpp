#include"Grade.h"
#include<iostream>
#include"string.h"
using namespace std;
using namespace System;
Grade::Grade() {
	Position = gcnew String(" ");
	PayRate = 0.0;
	TaxRate = 0.0;
}
Grade::Grade(String ^position) {
	this->Position = position;
}

String ^ Grade::GetPostition()
{
	return this->Position;
}
void Grade::SetPosition(String ^position)
{
   this->Position = position;
}
float Grade::GetTaxRate()
{
	return this->TaxRate;
}
void Grade::SetTaxRate(float TaxRate)
{
	this->TaxRate = TaxRate;
}
float Grade::GetPayRate()
{
	return this->PayRate;
}
void Grade::SetPayRate(float PayRate)
{
	this->PayRate = PayRate;

}
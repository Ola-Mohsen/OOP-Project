#pragma once
using namespace std;
using namespace System;
ref class Grade
{
protected: 


	String ^Position;
	float TaxRate, PayRate;

public:
	Grade();
	Grade( String^);
	String ^ GetPostition();
	void SetPosition(String^ );
	float GetTaxRate();
	void SetTaxRate(float);
	float GetPayRate();
	void SetPayRate(float);
};

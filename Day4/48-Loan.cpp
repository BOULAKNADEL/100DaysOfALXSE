#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

float MonthlyInstallment(float LoanAmount, float HowManyMonth)
{
	return ((float)LoanAmount / HowManyMonth);
}

int main(void)
{
	float LoanAmout = ReadPositiveNumber("Please Enter Loan Amount");
	float HowManyMonth = ReadPositiveNumber("Please Enter How many month");

	cout << "\n Monthly Installment = " << MonthlyInstallment(LoanAmout, HowManyMonth);
	cout << endl;
	return (0);
}

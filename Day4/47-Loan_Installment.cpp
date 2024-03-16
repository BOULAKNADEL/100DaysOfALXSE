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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return ((float)LoanAmount / MonthlyInstallment);
}

int main(void)
{
	float LoanAmout = ReadPositiveNumber("Please Enter Loan Amount");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment ");

	cout << "\n Total Months to pay = " << TotalMonths(LoanAmout, MonthlyInstallment);
	cout << endl;
	return (0);
}

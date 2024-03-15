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

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return (TotalCashPaid - TotalBill);
}

int main(void)
{
	float TotalBill = ReadPositiveNumber("please enter total bill");
	float TotalCashPaid = ReadPositiveNumber("Please enter total cash paid");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total cash paid = " << TotalCashPaid << endl;

	cout << "********************************\n";
	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	return (0);
}

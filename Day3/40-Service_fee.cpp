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

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return (TotalBill);
}

int main(void)
{
	float TotalBill = ReadPositiveNumber("Please enter Total bill");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After service fee and sales tax = "
	     << TotalBillAfterServiceAndTax(TotalBill) << endl;

	return (0);
}

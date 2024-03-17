#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

int SumOfDigit(int Number)
{
	int Remainder = 0, Sum = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}
	return (Sum);
}

int main(void)
{
	cout << "\n Sum of digits = "
	     << SumOfDigit(ReadPositiveNumber("Enter a positive number "));
	cout << "\n";
	return (0);
}

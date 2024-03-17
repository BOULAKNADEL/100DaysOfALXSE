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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return (Number2);
}

void PrintDigits(int Number)
{
	int Remainder = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main(void)
{
	PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a number please ")));
	return (0);
}

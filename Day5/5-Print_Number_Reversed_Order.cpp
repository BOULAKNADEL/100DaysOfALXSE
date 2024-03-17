#include <iostream>
using namespace std;


int ReadNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

void PrintDigits(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main(void)
{
	PrintDigits(ReadNumber("Please enter a positive number "));
	return (0);
}

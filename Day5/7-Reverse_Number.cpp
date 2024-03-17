
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

int main(void)
{
	cout << ReverseNumber(ReadPositiveNumber("Enter a positive number"));
	cout << endl;
	return (0);
}

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


int CountDigitFrequency(int DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		if (Remainder == DigitToCheck)
			FreqCount++;

	}
	return (FreqCount);
}

int main(void)
{
	int Number = ReadPositiveNumber("Enter a positive number please ");
	short DigitToCheck = ReadPositiveNumber("Enter one digit to check");

	cout << CountDigitFrequency(DigitToCheck, Number);
	return (0);
}

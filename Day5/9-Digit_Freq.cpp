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

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int Remainder = 0, FreqCount = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		if (Remainder == DigitToCheck)
			FreqCount++;
	}
	return (FreqCount);
}

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		if (DigitFrequency > 0)
		{
			cout << " Digit " << i << " Frequency is : " << DigitFrequency << " Time(s)" << endl;
		}
	}
}

int main(void)
{
	int Number = ReadPositiveNumber("Please enter a positive number ");

	PrintAllDigitsFrequency(Number);
	return (0);
}

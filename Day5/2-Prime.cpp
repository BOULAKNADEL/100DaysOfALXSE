#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeOrNot
{
	Prime = 1,
	NotPrime = 2
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return (Number);
}

enPrimeOrNot CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return (enPrimeOrNot::NotPrime);
	}
	return (enPrimeOrNot::Prime);
}

void PrintPrimeNumberFrom1ToN(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeOrNot::Prime)
			cout << i << endl;
	}
}

int main(void)
{
	PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Enter a Number please "));
	return (0);
}

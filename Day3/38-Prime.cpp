#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotprime
{
	Prime = 1,
	NotPrime = 2
};

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

enPrimeNotprime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return (enPrimeNotprime::NotPrime);
	}
	return (enPrimeNotprime::Prime);
}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
		case enPrimeNotprime::Prime:
			cout << "the number is prime \n";
			break;
		case enPrimeNotprime::NotPrime:
			cout << "The number is not prime \n";
			break;
	}
}

int main(void)
{
	PrintNumberType(ReadPositiveNumber("Please enter a positive number "));
	return (0);
}

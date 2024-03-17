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

bool IsPerfect(int Number)
{
	int sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			sum += i;
	}
	return (Number == sum);
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
	for (int i = 1; i < Number; i++)
	{
		if (IsPerfect(i))
		{
			cout << i << endl;
		}
	}
}

int main(void)
{
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number :)"));
	return (0);
}

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

bool Isperfect(int Number)
{
	int sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			sum += i;
	}
	return (Number == sum);
}

void PrintResult(int Number)
{
	if (Isperfect(Number))
		cout << "\n is perfect \n";
	else
		cout << "\n is not perfect \n";
}

int main(void)
{
	PrintResult(ReadPositiveNumber("Enter a positive number please "));
	return (0);
}

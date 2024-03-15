#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return (Number);
}

int Factorial(int N)
{
	int F = 1;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		F = F * Counter;
	}
	return (F);
}

int main(void)
{
	cout << Factorial(ReadPositiveNumber("Enter a number")) << endl;

	return (0);
}

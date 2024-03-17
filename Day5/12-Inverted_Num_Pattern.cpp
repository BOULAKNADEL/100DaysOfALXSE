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

void PrintInvertedNumberPattern(int Number)
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

int main(void)
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Enter a number please"));
	return (0);
}

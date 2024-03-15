#include <iostream>
using namespace std;

enum enOddOrEven
{
	Odd = 1,
	Even = 2
};

int ReadNumber()
{
	int Number;

	cout << "Please enter a number " << endl;
	cin >> Number;
	return (Number);
}

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return (enOddOrEven::Odd);
	else
		return (enOddOrEven::Even);
}

int SumOddNumbersFrom1ToN(int N)
{
	int sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
			sum += Counter;
	}
	return (sum);
}


int main(void)
{
	int N = ReadNumber();

	cout << SumOddNumbersFrom1ToN(N) << endl;
	return (0);
}

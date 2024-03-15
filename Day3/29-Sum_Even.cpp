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

int SumEvenNumbersFromNTo1(int N)
{
	int sum = 0;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			sum += Counter;
	}
	return (sum);
}


int main(void)
{
	int N = ReadNumber();

	cout << SumEvenNumbersFromNTo1(N) << endl;
	return (0);
}

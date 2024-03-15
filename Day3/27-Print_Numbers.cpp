#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;

	cout << "Enter a Number Please \n";
	cin >> Number;
	return (Number);
}

void PrintRangeFromNTo1(int N)
{
	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main(void)
{
	int N = ReadNumber();

	PrintRangeFromNTo1(N);
	return (0);
}

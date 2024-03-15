#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;

	cout << "Enter a Number Please \n";
	cin >> Number;
	return (Number);
}

void PrintRangeFrom1ToN(int N)
{
	for (int Counter = 1; Counter <= N; Counter++)
	{
		cout << Counter << endl;
	}
}

int main(void)
{
	int N = ReadNumber();

	PrintRangeFrom1ToN(N);
	return (0);
}

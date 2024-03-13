#include <iostream>
using namespace std;


int ReadNumber(void)
{
	int Number = 0;

	cout << "Enter a number\n";
	cin >> Number;
	return (Number);
}

float CalculateHalfNumber(int Number)
{
	return ((float)Number / 2);
}

void PrintResult(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

	cout << Result << endl;
}

int main(void)
{
	PrintResult(ReadNumber());
	return (0);
}

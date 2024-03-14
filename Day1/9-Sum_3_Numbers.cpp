#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
	cout << "Please enter your number 1 " << endl;
	cin >> Num1;

	cout << "Please enter you number 2 " << endl;
	cin >> Num2;

	cout << "Please enter you number 3" << endl;
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return (Num1 + Num2 + Num3);
}

void PrintResults(int Total)
{
	cout << "\n the total sum of numbers is : " << Total << endl;
}

int main(void)
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintResults(SumOf3Numbers(Num1, Num2, Num3));

	return (0);
}

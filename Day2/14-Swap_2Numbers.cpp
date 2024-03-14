#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
	cout << "Enter the first number \n";
	cin >> Num1;

	cout << "Enter the second number \n";
	cin >> Num2;
}

void Swap(int &A, int &B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
	cout << "\n Number1 = " << Num1 << endl;
	cout << "\n Number2 = " << Num2 << endl;
}

int main(void)
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	cout << "\n Before swap : \n";
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	cout << "\n After swap : \n";
	PrintNumbers(Num1, Num2);
	return (0);
}

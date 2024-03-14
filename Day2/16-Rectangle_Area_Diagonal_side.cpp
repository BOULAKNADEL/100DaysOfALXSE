#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float &A, float &D)
{
	cout << "Enter the side value\n";
	cin >> A;

	cout << "Enter the diagonal value\n";
	cin >> D;
}

float RectangleAreaByDiagonalSide(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return (Area);
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main(void)
{
	float A, D;

	ReadNumber(A, D);
	PrintResult(RectangleAreaByDiagonalSide(A, D));
	return (0);
}

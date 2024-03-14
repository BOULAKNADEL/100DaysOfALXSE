#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float &A, float &H)
{
	cout << "Enter the Base value\n";
	cin >> A;

	cout << "Enter the Height value\n";
	cin >> H;
}

float TriangleArea(float A, float H)
{
	float Area = (A / 2) * H;
	return (Area);
}

void PrintResult(float Area)
{
	cout << "\n Triangle Area = " << Area << endl;
}

int main(void)
{
	float A, H;

	ReadNumber(A, H);
	PrintResult(TriangleArea(A, H));
	return (0);
}

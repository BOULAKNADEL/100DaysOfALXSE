#include <iostream>
using namespace std;


void ReadNumbers(float &A, float &B)
{
	cout << "\n Please enter rectangle width " << endl;
	cin >> A;

	cout << "\n Please enter rectangle length " << endl;
	cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
	return (A * B);
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main(void)
{
	float A, B;
	ReadNumbers(A, B);
	PrintResult(CalculateRectangleArea(A, B));
	return (0);
}

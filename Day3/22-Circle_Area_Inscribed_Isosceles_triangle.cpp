#include <iostream>
#include <cmath>
using namespace std;


void ReadTriangleData(float &A, float &B)
{
	cout << "Please enter triangle side A " << endl;
	cin >> A;

	cout << "Please enter triangle base B " << endl;
	cin >> B;
}

float CircleAreaByITriangle(float A, float B)
{
	const float PI = 3.14;

	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B)) / (2 * A + B);
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main(void)
{
	float A, B;

	ReadTriangleData(A, B);
	printResult(CircleAreaByITriangle(A, B));
	return (0);
}

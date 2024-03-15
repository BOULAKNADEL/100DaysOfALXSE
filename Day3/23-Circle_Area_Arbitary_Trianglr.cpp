#include <iostream>
#include <cmath>
using namespace std;


void ReadTriangleData(float &A, float &B, float &C)
{
	cout << "Please Enter triangle side A" << endl;
	cin >> A;

	cout << "Please Enter triangle side B" << endl;
	cin >> B;

	cout << "Please Enter Triangle side C" << endl;
	cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C)
{
	const float PI = 3.14;
	float P;
	P = (A + B + C) / 2;

	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main(void)
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	printResult(CircleAreaByATriangle(A, B, C));
	return (0);
}

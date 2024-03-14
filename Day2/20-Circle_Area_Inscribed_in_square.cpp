#include <iostream>
#include <cmath>
using namespace std;


float ReadSquareSide(void)
{
	float A;

	cout << "Please enter square side " << endl;
	cin >> A;

	return (A);
}

float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.14;

	float Area = (pow(A, 2) * PI) / 4;
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area inscribed in square = " << Area << endl;
}

int main(void)
{
	printResult(CircleAreaInscribedInSquare(ReadSquareSide()));
	return (0);
}

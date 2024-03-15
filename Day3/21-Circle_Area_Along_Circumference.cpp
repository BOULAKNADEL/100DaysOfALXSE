#include <iostream>
#include <cmath>
using namespace std;


float ReadCircumference(void)
{
	float L;

	cout << "Please enter Circumference " << endl;
	cin >> L;

	return (L);
}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.14;

	float Area = pow(L, 2)  / (4 * PI);
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area By Circumference = " << Area << endl;
}

int main(void)
{
	printResult(CircleAreaByCircumference(ReadCircumference()));
	return (0);
}

#include <iostream>
#include <cmath>
using namespace std;


float ReadDiameter(void)
{
	float D;

	cout << "Please enter radius D " << endl;
	cin >> D;

	return (D);
}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.14;

	float Area = (pow(D, 2) * PI) / 4;
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area by diameter = " << Area << endl;
}

int main(void)
{
	printResult(CircleAreaByDiameter(ReadDiameter()));
	return (0);
}

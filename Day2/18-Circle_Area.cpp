#include <cmath>
#include <iostream>
 using namespace std;


float ReadRadius(void)
{
	float R;

	cout << "Please enter radius R " << endl;
	cin >> R;

	return (R);
}

float CircleArea(float R)
{
	const float PI = 3.14;

	float Area = pow(R, 2) * PI;
	return (Area);
}

void printResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main(void)
{
	printResult(CircleArea(ReadRadius()));
	return (0);
}

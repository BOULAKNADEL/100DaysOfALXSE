#include <iostream>
#include <cmath>
using namespace std;

int _sqrt(int Number)
{
	return (pow(Number, 0.5));
}

int main(void)
{
	int MySqrt = _sqrt(25);

	cout << MySqrt << endl;
	return (0);
}

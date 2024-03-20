#include <iostream>
using namespace std;

int _floor(float Number)
{
	if (Number < 0)
		return ((int)Number - 1);
	else
		return ((int)Number);
}

int main(void)
{
	int MyFloor = _floor(-10);

	cout << MyFloor << endl;
	return (0);
}

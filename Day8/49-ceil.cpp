#include <iostream>
using namespace std;

float GetFractionPart(float Number)
{
	return (Number - (int)Number);
}

int _ceil(float Number)
{
	if (GetFractionPart(Number) > 0)
	{
		if (Number > 0)
			return (Number + 1);
		else
			return ((int)Number);
	}
	else
		return (Number);
}

int main(void)
{
	int MyCeil = _ceil(-10.1);

	cout << MyCeil << endl;
	return (0);
}

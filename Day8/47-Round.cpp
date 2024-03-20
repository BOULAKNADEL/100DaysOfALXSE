#include <iostream>
using namespace std;

float GetFractionPart(float Number)
{
	return (Number - (int)Number);
}

int _round(float Number)
{
	int intPart = (int)Number;
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number < 0)
			++intPart;
		else
			--intPart;
	}
	else
		return (intPart);

	return (Number);
}

int main(void)
{
	int MyRound = _round(10.30);

	cout << MyRound << endl;
	return (0);
}

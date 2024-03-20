#include <iostream>
using namespace std;


float _abs(float Number)
{
	if (Number < 0)
		return (Number * -1);
	else
		return (Number);
}

int main(void)
{
	int absolute = _abs(10);

	cout << absolute << endl;
	return (0);
}

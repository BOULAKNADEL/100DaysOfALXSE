#include <iostream>
#include <string>
using namespace std;

void PrintLetterAtoZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main(void)
{
	PrintLetterAtoZ();
	return (0);
}

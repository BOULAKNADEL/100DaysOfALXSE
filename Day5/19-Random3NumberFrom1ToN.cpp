#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

int main(void)
{
	cout << RandomNumber(1, 10);
	return (0);
}

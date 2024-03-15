#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;

	cout << "Please Enter your age " << endl;
	cin >> Age;
	return (Age);
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";
	else
		cout << Age << " is a invalid age \n";
}

int main(void)
{
	PrintResult(ReadAge());

	return (0);
}

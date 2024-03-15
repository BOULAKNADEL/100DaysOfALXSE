#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;
	return (Number);
}

float SumNumbers()
{
	int sum, number = 0, counter = 1;

	do
	{
		number = ReadNumber("Please enter number " + to_string(counter));

		if (number == -99)
			break;

		sum += number;
		counter++;
	} while (number != -99);
	return (sum);
}

int main(void)
{
	cout << endl
	     << "Result = " << SumNumbers() << endl;
	return (0);
}

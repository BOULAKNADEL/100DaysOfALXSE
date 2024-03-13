#include <iostream>
using namespace std;

void ReadNumbers(int &Mark1, int &Mark2, int &Mark3)
{
	cout << "Please enter your Mark 1 " << endl;
	cin >> Mark1;

	cout << "Please enter you Mark 2 " << endl;
	cin >> Mark2;

	cout << "Please enter you Mark 3" << endl;
	cin >> Mark3;
}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return (Mark1 + Mark2 + Mark3);
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return ((float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3);
}

void PrintResults(float Average)
{
	cout << "\n the average is : " << Average << endl;
}

int main(void)
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark1, Mark3));

	return (0);
}

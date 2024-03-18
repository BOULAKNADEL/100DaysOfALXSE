#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength)
{
	cout << "How many element do you want ?\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

int MinNumberInArray(int arr[100], int arrlength)
{
	int Min = 0;
	Min = arr[0];

	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] < Min)
			Min = arr[i];
	}
	return (Min);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);
	cout << "Array elements : ";
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "Min Number is : " << MinNumberInArray(arr, arrLength) << endl;
	return (0);
}

#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

void ReadArray(int arr[100], int &arrlength)
{
	cout << "How many element do you want \n";
	cin >> arrlength;

	cout << "Enter array element :\n";

	for (int i = 0; i < arrlength; i++)
	{
		cout << "Element [" << i + 1 << "] = ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int NumberToCheck, int arr[100], int arrLength)
{
	int count = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (NumberToCheck == arr[i])
			count++;
	}
	return (count);
}

int main(void)
{
	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the number that you want to check");

	cout << "\n Original Array : ";
	PrintArray(arr, arrLength);

	cout << "the number : " << NumberToCheck << endl;
	cout << "is repeated " << TimesRepeated(NumberToCheck, arr, arrLength);
	cout << " time(s)" << endl;
	return (0);
}

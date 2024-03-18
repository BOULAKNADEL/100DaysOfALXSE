#include <iostream>
#include <cmath>
using namespace std;


int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

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

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void Sum2Array(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arr2[100], arrSum[100], arrLength;

	arrLength = ReadPositiveNumber("How many element do you want in the array");
	FillArrayWithRandomNumbers(arr, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	Sum2Array(arr, arr2, arrSum, arrLength);

	cout << "\n Array 1 Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\n Array 2 Elements : \n";
	PrintArray(arr2, arrLength);

	cout << "\n Sum of Array 1 and Array 2 Elements : \n";
	PrintArray(arrSum, arrLength);
	return (0);
}

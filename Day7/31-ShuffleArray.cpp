#include <iostream>
using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}

void Swap(int &A, int &B)
{
	int Temp = 0;

	Temp = A;
	A = B;
	B = Temp;
}



void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main(void)
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	arrLength = ReadPositiveNumber("\nHow many element fo you want ?\n");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "This is the array before shuffle : \n";
	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);
	cout << "This is the array after shuffle : \n";
	PrintArray(arr, arrLength);
	return (0);
}

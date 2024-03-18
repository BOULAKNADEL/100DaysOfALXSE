#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	cout << "How many element do you want ?\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[i];
	}
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main() 
{   
	srand((unsigned)time(NULL)); 
	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength); 
	int arr2[100];     
	CopyArray(arr, arr2, arrLength);     
	cout << "\nArray 1 elements:\n";     
	PrintArray(arr, arrLength);     
	cout << "\nArray 2 elements after copy:\n";     
	PrintArray(arr2, arrLength); 
	return 0; 
} 

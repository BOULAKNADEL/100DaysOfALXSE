#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enPrimeOrNot
{
	Prime = 1,
	NotPrime = 2
};

enPrimeOrNot CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return (enPrimeOrNot::NotPrime);
	}
	return (enPrimeOrNot::Prime);
}

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

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i] == enPrimeOrNot::Prime))
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
	}
}


int main() 
{  
	srand((unsigned)time(NULL)); 
	int arr[100], arrLength = 0, arr2Length = 0; 

	FillArrayWithRandomNumbers(arr, arrLength); 
	int arr2[100];     
	
	CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);     
	
	cout << "\nArray 1 elements:\n";     
	PrintArray(arr, arrLength);     
	cout << "\nArray 2 elements after copy:\n";     
	PrintArray(arr2, arr2Length); 
	return 0; 
} 

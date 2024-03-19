#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}


void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	cout << "How many element do you want \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
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

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return (i);
	}
	return (-1);
}

int ReadNumber(void)
{
	int Number;

	cout << "Please enter a number to search for \n";
	cin >> Number;
	return (Number);
}

int main(void) 
{   
	srand((unsigned)time(NULL)); 
	int arr[100], arrLength;     

	FillArrayWithRandomNumbers(arr, arrLength);     
	cout << "\nArray 1 elements:\n";     
	PrintArray(arr, arrLength); 
	
	int Number = ReadNumber();     
	cout << "\nNumber you are looking for is: " << Number << endl; 
	
	short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength); 
	
	if (NumberPosition == -1)
		cout << "The number is not found :-(\n";
	else
	{
		cout << "The number found at position: ";
		cout << NumberPosition << endl;
		cout << "The number found its order  : ";
		cout << NumberPosition + 1 << endl;
	}
	return 0;
}

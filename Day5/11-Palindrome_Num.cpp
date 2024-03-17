#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return (Number2);
}

bool IsPalindrome(int Number)
{
	return (Number == ReverseNumber(Number));
}

int main(void)
{
	if (IsPalindrome(ReadPositiveNumber("Enter a number please")))
		cout << "\n is palindrome \n";
	else
		cout << "\n is NOT palindrome \n";
	return (0);
}

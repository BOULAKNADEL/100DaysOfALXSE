#include <iostream>
using namespace std;

/**
 * enNumberType - enum 
 * @odd: odd Number
 * @even: even Number
*/

enum enNumberType
{
	Odd = 1,
	Even = 2
};

/**
 * ReadNumber - Read the user Input
 * Return: the number
*/

int ReadNumber(void)
{
	int Number = 0;

	cout << "Enter a number please :)\n";
	cin >> Number;
	return (Number);
}

/**
 * CheckNumberType - Check if the number is odd or even
 * @Number: the number to check
 * Return: odd or even
*/

enNumberType CheckNumberType(int Number)
{
	int Result = Number % 2;

	if (Result == 0)
		return (enNumberType::Even);
	else
		return (enNumberType::Odd);
}
/**
 * PrintNumberType - print the type of the number
 * @NumberType: the type of the number (odd or even)
 * Return: Nothing
*/

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\n Even Number \n";
	else
		cout << "\n Odd Number \n";
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return (0);
}

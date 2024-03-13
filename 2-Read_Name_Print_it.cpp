#include <iostream>
using namespace std;

/**
 * ReadName - Read the input of the user
 * Return: The full name 
*/

string ReadName(void)
{
	string FullName = "";

	cout << "Enter your fullname please \n";
	getline(cin, FullName);
	return (FullName);
}

/**
 * PrintName - Print the name of the user
 * @FullName: the user Full name
 * Return: Nothing
*/

void PrintName(string FullName)
{
	cout << "Your Name is : " << FullName << endl;
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	PrintName(ReadName());

	return (0);
}

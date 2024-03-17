#include <iostream>
using namespace std;

void PrintTableHeader()
{
	cout << "\033[1;20m\n\n\t\t\t Multiplication Table From 1 to 10\n\n\033[0m";
	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n-----------------------------------------";
	cout << "-----------------------------------------\n";
}

string ColumnSeparator(int i)
{
	if (i < 10)
		return ("   |");
	else
		return ("  |");
}

void PrintMultiplicationTable()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeparator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

int main(void)
{
	PrintMultiplicationTable();
	cout << endl;
	return (0);
}

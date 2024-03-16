#include <iostream>
using namespace std;

enum enMonhOfYear
{
	Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	return (Number);
}

enMonhOfYear ReadMonthOfYear()
{
	return (enMonhOfYear)ReadNumberInRange("Please enter month number Please ", 1, 12);
}

string GetMonthOfYear(enMonhOfYear Month)
{
	switch (Month)
	{
		case enMonhOfYear::Jan:
			return ("January");
		case enMonhOfYear::Feb:
			return ("February");
		case enMonhOfYear::Mar:
			return ("March");
		case enMonhOfYear::Apr:
			return ("April");
		case enMonhOfYear::May:
			return ("May");
		case enMonhOfYear::Jun:
			return ("June");
		case enMonhOfYear::Jul:
			return ("July");
		case enMonhOfYear::Aug:
			return ("August");
		case enMonhOfYear::Sep:
			return ("September");
		case enMonhOfYear::Oct:
			return ("October");
		case enMonhOfYear::Nov:
			return ("November");
		case enMonhOfYear::Dec:
			return ("December");
	}
}

int main(void)
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return (0);
}

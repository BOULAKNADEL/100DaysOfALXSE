#include <iostream>
using namespace std;

enum enDayOfWeek
{
	Sat = 1,
	Sun = 2,
	Mon = 3,
	Tue = 4,
	Wed = 5,
	Thu = 6,
	Fri = 7
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Message << endl;

	} while (Number < From || Number > To);
	return (Number);
}

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter day number ", 1, 7);
}

string GetDayOfweek(enDayOfWeek day)
{
	switch (day)
	{
		case enDayOfWeek::Sat:
			return ("Saturday");
		case enDayOfWeek::Sun:
			return ("Sunday");
		case enDayOfWeek::Mon:
			return ("Monday");
		case enDayOfWeek::Tue:
			return ("Tuesday");
		case enDayOfWeek::Wed:
			return ("Wednesday");
		case enDayOfWeek::Thu:
			return ("Thursday");
		case enDayOfWeek::Fri:
			return ("Friday");
		default:
			return ("Monday");
        }
}

int main(void)
{
	cout << GetDayOfweek(ReadDayOfWeek()) << endl;

	return (0);
}

#include <iostream>
using namespace std;


float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

float HoursToDays(float NumberOfHours)
{
	return ((float)NumberOfHours / 24);
}

float HoursToWeeks(float NumberOfHours)
{
	return ((float)NumberOfHours / 24 / 7);
}

float DaysToWeeks(float NumberOfDays)
{
	return ((float)NumberOfDays / 7);
}

int main(void)
{
	float NumberOfHours = ReadPositiveNumber("Please enter number of hours ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
	return (0);
}

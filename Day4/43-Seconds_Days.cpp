#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

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

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerDay);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerDay);
	Remainder = Remainder & SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;

	return (TaskDuration);
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
	     << TaskDuration.NumberOfHours << ":"
	     << TaskDuration.NumberOfMinutes << ":"
	     << TaskDuration.NumberOfSeconds << "\n";
}

int main(void)
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Total seconds ");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

	return (0);
}

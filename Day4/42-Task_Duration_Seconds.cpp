#include <iostream>
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

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter number of days");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter number of hours");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number of minutes");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter number of seconds");

	return (TaskDuration);
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfDays * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return (DurationInSeconds);
}

int main(void)
{
	cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
	cout << endl;

	return (0);
}

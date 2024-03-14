#include <iostream>
using namespace std;

struct stInfos
{
	string FirstName;
	string LastName;
};

stInfos ReadInfos(void)
{
	stInfos infos;

	cout << "Enter you first name\n";
	cin >> infos.FirstName;
	cout << "Enter your last name\n";
	cin >> infos.LastName;
	return (infos);
}

string GetFullName(stInfos infos, bool Reversed)
{
	string FullName = "";

	if (Reversed)
		FullName = infos.LastName + " " + infos.FirstName;
	else
		FullName = infos.FirstName + " " + infos.LastName;

	return (FullName);
}

void PrintFullName(string FullName)
{
	cout << "\n Your full name is : ";
	cout << FullName << endl;
}

int main(void)
{
	PrintFullName(GetFullName(ReadInfos(), 0));

	return (0);
}

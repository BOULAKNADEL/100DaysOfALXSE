#include <iostream>
using namespace std;

struct stInfos
{
	short Age;
	bool HasDrivingLicense;
};

stInfos ReadInfos(void)
{
	stInfos infos;

	cout << "\n How old are you ? \n";
	cin >> infos.Age;
	cout << "\n Do you have a driver license ? (yes = 1 / No = 0) \n";
	cin >> infos.HasDrivingLicense;
	return (infos);
}

bool IsAccepted(stInfos infos)
{
	return (infos.Age > 21 && infos.HasDrivingLicense);
}

void PrintResult(stInfos infos)
{
	if (IsAccepted(infos))
		cout << "\n Hired \n";
	else
		cout << "\n Rejected \n";
}

int main(void)
{
	PrintResult(ReadInfos());

	return (0);
}

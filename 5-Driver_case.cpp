#include <iostream>
using namespace std;

struct stInfos
{
	short Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfos ReadInfos(void)
{
	stInfos infos;

	cout << "\n How old are you ? \n";
	cin >> infos.Age;
	cout << "\n Do you have a driver license ? (yes = 1 / No = 0) \n";
	cin >> infos.HasDrivingLicense;
	cout << "\n Do you have a recommendation \n";
	cin >> infos.HasRecommendation;
	return (infos);
}

bool IsAccepted(stInfos infos)
{
	if (infos.HasRecommendation)
		return (true);
	else
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

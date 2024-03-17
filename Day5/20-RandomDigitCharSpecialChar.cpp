#include <iostream>
using namespace std;

enum enCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecilaCharacter = 3,
	Digit = 4
};

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

char GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
		case enCharType::CapitalLetter:
		{
			return (char(RandomNumber(65, 90)));
		}
		case enCharType::SmallLetter:
		{
			return (char(RandomNumber(97, 122)));
		}
		case enCharType::SpecilaCharacter:
		{
			return (char(RandomNumber(33, 47)));
		}
		case enCharType::Digit:
		{
			return (char(RandomNumber(48, 57)));
		}
	}
}

int main(void)
{
	srand((unsigned)time(NULL));

	cout << GetRandomChar(enCharType::CapitalLetter) << endl;
	cout << GetRandomChar(enCharType::SmallLetter) << endl;
	cout << GetRandomChar(enCharType::SpecilaCharacter) << endl;
	cout << GetRandomChar(enCharType::Digit) << endl;
	return (0);
}

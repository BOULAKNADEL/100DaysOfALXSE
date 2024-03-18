#include <iostream>
#include <cstdlib>
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
	switch(CharType)
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
			return (char((int)RandomNumber(48, 57)));
		}
	}
}

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return (Number);
}

string GenerateWord(enCharType CharType, short length)
{
	string word = "";

	for (int i = 1; i <= length; i++)
	{
		word = word + GetRandomChar(CharType);
	}
	return (word);
}

string GenerateKey(void)
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4);
	return (Key);
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}


int main(void)
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("How many number of keys do want ?"));
	return (0);
}

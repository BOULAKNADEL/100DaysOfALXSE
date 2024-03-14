#include <iostream>
#include <string>
using namespace std;

enum enPassFail
{
	Pass = 1,
	Fail = 2
};

int ReadMark(void)
{
	int Mark;

	cout << "Please enter your mark\n";
	cin >> Mark;
	return (Mark);
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResults(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You passed" << endl;
	else
		cout << "\n you failed" << endl;
}

int main(void)
{
	printResults(ReadMark());
	return (0);
}

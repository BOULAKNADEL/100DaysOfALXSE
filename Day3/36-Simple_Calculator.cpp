#include <iostream>
using namespace std;

enum enOperationType
{
	Add = '+',
	Subtract = '-',
	Multiply = '*',
	Divide = '/'
};

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return (Number);
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter operation type ( +, -, *, /) \n";
	cin >> OT;
	return ((enOperationType)OT);
}

float Calculate(float Number1, float Number2, enOperationType opType)
{
	switch (opType)
	{
		case enOperationType::Add:
			return (Number1 + Number2);
			break;
		case enOperationType::Subtract:
			return (Number1 - Number2);
			break;
		case enOperationType::Multiply:
			return (Number1 * Number2);
			break;
		case enOperationType::Divide:
			return (Number1 / Number2);
			break;
		default:
			return (Number1 + Number2);
	}
}

int main(void)
{
	float Number1 = ReadNumber("Please enter the first number ");
	float Number2 = ReadNumber("Please enter the second number ");

	enOperationType OpType = ReadOpType();

	cout << endl
	     << "Result = " << Calculate(Number1, Number2, OpType) << endl;

	return (0);
}

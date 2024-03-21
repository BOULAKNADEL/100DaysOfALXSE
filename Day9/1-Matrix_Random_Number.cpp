#include <iostream>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return (RandNum);
}

void FillMatrixWithRandomNumber(int Matrix[3][3], short Rows, short Col)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << Matrix[i][j] << "   ";
		}
		cout << endl;
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);
	PrintMatrix(Matrix, 3, 3);
	return (0);
}

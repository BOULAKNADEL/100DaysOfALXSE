#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
	vector <int> vNumbers = {10, 20, 30, 40, 50};

	cout << "Vector Numbers : \n";

	for (int &Numbers : vNumbers)
	{
		cout << Numbers << " ";
	}
	return (0);
}

#include <iostream>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << " Please enter PIN code \n";
	cin >> PinCode;
	return (PinCode);
}

bool Login()
{
	string PinCode;
	int counter = 3;

	do
	{
		counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return (1);
		}
		else
		{
			system("color 4F");
			cout << "\n Wrong PIN, yo have " << counter << " more tries " << endl;
		}
	} while (counter >= 1 && PinCode != "1234");
	return (0);
}

int main(void)
{
	if (Login())
	{
		system("color 2F");
		cout << "\n Your account balance is " << 7500 << "\n";
	}
	else
	{
		cout << "\n Your card blocked call the bank for help. \n";
	}
	return (0);
}

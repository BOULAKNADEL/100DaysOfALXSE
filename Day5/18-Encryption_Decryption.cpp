#include <iostream>
using namespace std;


string ReadText(void)
{
	string Text;

	cout << "Enter a text to encrypt it " << endl;
	getline(cin, Text);
	return (Text);
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return (Text);
}

string DecryptionText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return (Text);
}

int main(void)
{
	short Encryptionkey = 2;
	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text, Encryptionkey);
	string TextAfterDecryption = DecryptionText(TextAfterEncryption, Encryptionkey);

	cout << "\n Text before encryption : \n";
	cout << Text << endl;
	cout << "\n Text after encryption : \n";
	cout << TextAfterEncryption << endl;
	cout << "\n Text after Decrytpiton : \n";
	cout << TextAfterDecryption << endl;
	return (0);
}

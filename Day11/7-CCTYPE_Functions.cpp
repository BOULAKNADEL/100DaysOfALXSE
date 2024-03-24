#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');

    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    // Digits (A to Z)
    // returns zero if not, and non-zero if yes
    cout << "isupper('A') " << isupper('A') << endl;

    // Lower case (a to z)
    // returns zero if not, and non-zero if yes
    cout << "islower('A') " << islower('A') << endl;

    // Digits (0 to 9)
    // returns zero if not, and non-zero if yes
    cout << "isdigit('A') " << isdigit('A') << endl;

    // Punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non-zero if yes
    cout << "ispunct('A') " << ispunct('A') << endl;

    return 0;
}

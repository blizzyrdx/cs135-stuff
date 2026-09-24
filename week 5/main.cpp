#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // define variable
    int level = 0;
    int level2 = 0;
    char selection;

    //ask for combat level
    cout << "Combat Level: ";
    cin >> level2;

    // Read Combat Level
    if (cin.fail()) {
        cout << "Error: Invalid Number" << endl;
        return 0;
    }

    // fail for level under 3
    if (level2 < 3) {
        cout << "Error: Minimum combat level is 3\n";
        return 0;
    }

    // fail for level over 126
    if (level2 > 126) {
        cout << "Error: Maximum slayer level is 126\n";
        return 0;
    }
    // Read Player's Level
    if (level2 >= 3 || level2 <= 126) {
    cout << endl;
    cout << "Slayer Level: ";
    cin >> level; }

    // fail for character
    if (cin.fail()) {
        cout << "Error: Invalid Number" << endl;
        return 0;
    }

    // fail for level under 3
    if (level < 1) {
        cout << "Error: Minimum combat level is 1\n";
        return 0;
    }

    // fail for level over 126
    if (level > 99) {
        cout << "Error: Maximum slayer level is 99\n";
        return 0;
    }

    // Proceed

    if (level >= 1 && level <= 99) {
        cout << "(T/t)urael" << endl;
        cout << "(D/d)uradel" << endl;
        cout << "(K/k)onar" << endl;
        cout << "Selection: " << endl;
    }

    switch(selection) {
        case 'T':
        case 't':
        case 'D':
        case 'd':
        case 'K':
        case 'k':
    }
    return 0;
}
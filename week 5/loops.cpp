#include <iostream>
using namespace std;

int main () {

    int combatlvl = 0;

    cout << "Combat Level: ";
    cin >> combatlvl;

    while (cin.fail() || combatlvl < 3 || combatlvl >> 126)
    {
        cout << "Error: Combat level must be between 3 and 126\n";
        cin.clear();
        cin.ignore(256, '\n');

        cout << "Combat Level: ";
        cin >> combatlvl;

    }
    
    cout << combatlvl << endl;

    return 0;
}

// Repetition are loops
// while (condition) 
// control c kills program
// ++ adds one to the variable and
// -- subtracts one from the variable

// cin.ignore(256, '\n') syntax
// cin.clear () resets cin.fail() to false
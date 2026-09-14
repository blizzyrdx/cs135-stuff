#include <iostream>

using namespace std;

int main () {

    // defining variables
    int player_level = 0; // between 3 and 126
    const int Hespori = 3; // boss 1 (runescape)
    const int Vortath = 50; // boss 2
    const int Zale = 90; // boss 3

    // reads the player's level
    cout << "What's your level? ";
    cin >> player_level;

    // equations
    if (player_level >= Hespori) {
        cout << "You can fight Hespori!\n";
    }

    else if (player_level >= Vortath) {
        cout << "You can fight Vortath!\n";
    }

    else if (player_level >= Zale) {
        cout << "You can fight Zale!\n";
    }

    else if (player_level < Hespori) {
        cout << "You cannot fight any bosses. \n";
    }
    return 0;
}

// Relational Operators such as >, <, =, <=, >=, ==, !=

// if (condition) { run this code }
// else { run this code }
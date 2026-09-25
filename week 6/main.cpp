#include <iostream>

using namespace std;

int main() {

    //loop!

    // remember to initialize variable
    // attack variable
    int attack = 0;

    // define variables
    // initialize
    int monster_health = 0;
    int player_health = 0;

    // Output the monster and player's health
    cout << "Player Health: " << player_health << endl;
    cout << "Monster Health: " << monster_health << endl;
    cout << endl;
    cout << "1-Stab -or- 2-Slash: "; 
    cin >> attack;

    // if fail
    if (cin.fail() || attack < 1 || attack > 2) {
     cout << "Error: Invalid selection";
    }

    else if (attack == 1) {
        cout << "turtle";
    }

    else if (attack == 2) {
        cout << "monkey";
    }

    return 0;
}
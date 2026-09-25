#include <iostream>

using namespace std;

int main() {

    //loop!

    // remember to initialize variable
    // attack variable
    int attack = 0;

    // define variables
    // initialize
    int monster_health = 10;
    int player_health = 10;

    //initialize i
    int i = 0;

    // Output the monster and player's health
    // loop

    do {
    cout << "Player Health: " << player_health << endl;
    cout << "Monster Health: " << monster_health << endl;
    cout << endl;
    cout << "1-Stab -or- 2-Slash: "; 
    cin >> attack;

    // if fail
    if (cin.fail()) {
     cout << "Error: Invalid selection";
     cin.clear();
     cin.ignore();
    }

    if (i % 2 != 0) {
        cout << endl;
        cout << "The monster blocks your attack"; 
        cout << endl;
        i++;
    }
    if (attack == 1 && i % 2 == 0) {
        cout << endl;
        cout << "You stab the monster causing 2 damage" << endl;
        cout << endl;
        monster_health--;
        monster_health--;
        i++;
    }

    if (attack == 2 && i % 2 == 0) {
        cout << endl;
        cout << "You slash the monster causing 3 damage" << endl;
        cout << endl;
        monster_health--;
        monster_health--;
        monster_health--;
        i++;
    }
} while (player_health > 0 && monster_health > 0);

if (player_health <= 0 || monster_health <= 0) {
    cout << "You killed the monster";
}

    return 0;
}
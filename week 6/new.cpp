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
    int i = 1;

    // Output the monster and player's health
    // loop

    while (player_health > 0 && monster_health > 0) {
    cout << "Player Health: " << player_health << endl;
    cout << "Monster Health: " << monster_health << endl;
    cout << endl;
    cout << "1-Stab -or- 2-Slash: "; 
    cin >> attack;
    cout << endl;

    if (attack == 1 && i % 2 == 0) {
        cout << "You stab the monster causing 2 damage" << endl;
        cout << "The monster shoots a fire ball at you causing 2 damage" << endl;
        cout << endl;
        monster_health--;
        monster_health--;
        player_health--;
        player_health--;
        i++;
    }

    if (attack == 2 && i % 2 == 0) {
        cout << "You slash the monster causing 3 damage" << endl;
        cout << "The monster shoots a fire ball at you causing 2 damage" << endl;
        cout << endl;
        monster_health--;
        monster_health--;
        monster_health--;
        player_health--;
        player_health--;
        i++;
    }

    if (i % 2 != 0) {
        cout << "The monster blocks your attack" << endl;
        cout << endl;
        i++; //add one

    // if fail
    if (cin.fail()) {
     cout << "Error: Invalid selection" << endl;
     cout << endl;
     cin.clear();
     cin.ignore();
     continue;
    }
    }
}

if (player_health == 0 && monster_health > 0) {
    cout << "The monster killed you";
}

if (monster_health == 0 && player_health > 0) {
    cout << "You killed the monster";
}

if (monster_health == 0 && player_health == 0) {
    cout << "The player and monster killed eachother";
}

    return 0;
}
#include <iostream>

using namespace std;

int main () {
    
    int monsterHealth = 100; //you can put a comma in between if you assign values to said integers
    int damage_taken;
    cout << "How much damage did the monster take?";
    cin >> damage_taken;

    int new_health = monsterHealth - damage_taken;
    cout << "New Health:" << new_health << endl;
    return 0;
} 
#include <iostream>

using namespace std;

int main () {
    // make helaths
    int m_health = 10, p_health = 10;
    char selection; //IMPORTANT

    
    
    cout << "(K/k)ick -or- <R/r)un ";
    cin >> selection;

do {

    //kick 
    if (selection == 'k' || selection == 'K')
    { 
        cout << "You kick the monster" << endl;
        m_health -= 3;
    }

    //run
    else if (selection == 'r' || selection == 'R')
    {
        cout << "You run away\n";
        break;
    }

    //monster shoots fireball
    else 
    {
        cout << "Invalid Selection\n";
        continue; //new syntax
    }

    cout << "The monster shoots a fireball at you\n";
        p_health--;

    // show healths
    cout << "Monster Health: " << m_health << endl;
    cout << "Player Health: " << p_health << endl;
} while (m_health > 0 && p_health >= 0);

    return 0;
}

// new keyword: continue which can only be used for loops
// break can be used for switch/loop 
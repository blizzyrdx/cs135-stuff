#include <iostream>

using namespace std;

int main () {
    // make helaths
    int m_health = 10, p_health = 10;
    char selection; //IMPORTANT

    cout << "(K/k)ick -or- <R/r)un ";
    cin >> selection;

    //kick 
    if (selection == 'k' || selection == 'K')
    { 
        cout << "You kick the monster" << endl;
        m_health -= 3;
    }

    //run
    if (selection == 'r' || selection == 'R')
    {
        cout << "You run away\n";
        return 0;
    }

    //monster shoots fireball
    cout << "The monster shoots a fireball at you\n";
    p_health--;

    // show healths
    cout << "Monster Health: " << m_health << endl;
    cout << "Player Health: " << p_health << endl;

    return 0;
}
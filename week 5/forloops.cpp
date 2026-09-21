#include <iostream>

using namespace std;

int main() {
    int potions = 1;

    do {
        if (cin.fail() || potions < 1 || potions > 100)
        {
            cout << "Error: Potion count must be between 1 and 100\n";
            cin.clear();
            cin.ignore(256, '\n');

        }
        cout << "How many potions do you want to craft? ";
        cin >> potions;
     } while(cin.fail() || potions < 1 || potions > 100);


    for (int i = 1; i <= potions; i++)
    {
        cout << "Making potion " << i << endl;
    }
    return 0;

}

/* 

for (e1; e2; e3) {
 // run when e2 is true
 }



*/
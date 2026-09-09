#include <iostream>
#include <iomanip> //setprecision(int) where int is how many digits of decimal numbers is displayed

using namespace std;

int main () { 

    //defines the amount of scimimtars and whips looted by the player
    cout << "How many scimitars did you loot? ";
    int scimitars;
    cout << "How many whips did you loot? ";
    int whips; 

    // decimals

    const double scimitar_value = 59750.55; 
    const double whip_value = 1487961.22;

    // output to terminal
    cout << fixed << setprecision(2);
    cout << "Item\tQty\tEach\tTotal\n";
    cout << "Scimitar\t" << scimitars << "\t$" << scimitar_value << "\t$" << scimitars * scimitar_value << "\n";
    cout << "Whip\t" << whips << "\t$" << whip_value << "\t$" << whips * whip_value << "\n";

    return 0;
}

// reads how many scimitars and whips a player looted and then a loot table
// that displays how much everyting is worth 
// Item, Qty, Each, Total
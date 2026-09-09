#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    string weapon = "Scimitar";
    string weapon2 = "Whip";
    int qty_Scimitar = 10;
    int qty_Whip = 5;
    double each = 59750.55, total = qty_Scimitar * each;

    cout << setw(10) << weapon << " " << qty_Scimitar << " " << each << " " << total << endl;
    return 0;
}

//setw(int) where int is the number of spaces at minimum to provide for the next piece of data output
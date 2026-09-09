#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    string weapon = "Scimitar";
    int qty = 10;
    double each = 59750.55, total = qty * each;

    cout << weapon;
    return 0;
}

//setw(int) where int is the number of spaces at minimum to provide for the next piece of data output
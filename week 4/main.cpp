#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //define magic and melee
    double melee_dagger = 1.3;
    double melee_scimitar = 2.7;
    double magic_bolt = 1.9;
    double magic_blast = 3.0;

    //define style_int
    int style_int = 0;

    //ask for the combat style as an integer
    cout << "Choose a style (1=Melee -or- 2=Magic): ";
    cin >> style_int;

    // Melee
    if (style_int = 1) {
    cout << "Choose a weapon (dagger or scimitar): ";
    }

    // Magic
    if (style_int = 2) {
    cout << "Choose a weapon (dagger or scimitar): ";
    }

    // Invalid
    if (style_int =! 1 || 2)
    cout << "Error; Invalid Number.";

    return 0;
}
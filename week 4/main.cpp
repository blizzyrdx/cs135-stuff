#include <iostream>
#include <string>

using namespace std;

int main() {

    //define magic and melee
    double melee_dagger = 1.3;
    double melee_scimitar = 2.7;
    double magic_bolt = 1.9;
    double magic_blast = 3.0;

    //define style_int
    int style_int = 0;

    //define melee and spell
    string melee = "";
    string spell = "";

    //ask for the combat style as an integer
    cout << "Choose a style (1=Melee -or- 2=Magic): ";
    cin >> style_int;

    // Melee
    if (style_int == 1) {
    cout << endl;
    cout << "Choose a weapon (dagger or scimitar): ";
    cin >> melee;

        if (melee == "dagger") {
        cout << endl;
        cout << "The dagger weapon  causes " << 10 * melee_dagger << " damage with bonus " << melee_dagger << "." << endl;
        return 0; 
        }
        if (melee == "scimitar") {
        cout << endl;
        cout << "The scimitar weapon  causes " << 10 * melee_scimitar << " damage with bonus " << melee_scimitar << "." << endl;
        return 0; 
        }

        //invalid weapon
        else {
        cout << "Error: Invalid weapon\n";
        return 0;
        }

    return 0;
    }

    // Magic
    if (style_int == 2) {
    cout << endl;
    cout << "Choose a spell (bolt or blast): ";
    cin >> spell;

        if (spell == "bolt") {
        cout << endl;
        cout << "The bolt spell  causes " << 10 * magic_bolt << " damage with bonus " << magic_bolt << "." << endl;
        return 0; 
        }
        if (spell == "blast") {
        cout << endl;
        cout << "The blast spell  causes " << 10 * magic_blast << " damage with bonus " << magic_blast << "." << endl;
        return 0; 
        }

        else {
        cout << "Error: Invalid spell\n";
        return 0;
        }

        
    return 0;
    }

    // Invalid
    // superflous 
    else {
    cout << "Error: Invalid number";
    return 0;
    }

    return 0;
}
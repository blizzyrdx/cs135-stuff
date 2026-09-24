#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // define variable
    int slayer = 0;
    int combat = 0;
    char selection;

    //ask for combat level
    cout << "Combat Level: ";
    cin >> combat;

    // Read Combat Level
    if (cin.fail()) {
        cout << "Error: Invalid Number" << endl;
        return 0;
    }

    // fail for level under 3
    if (combat < 3) {
        cout << "Error: Minimum combat level is 3\n";
        return 0;
    }

    // fail for level over 126
    if (combat > 126) {
        cout << "Error: Maximum slayer level is 126\n";
        return 0;
    }
    // Read Player's Level
    if (combat >= 3 || combat <= 126) {
    cout << endl;
    cout << "Slayer Level: ";
    cin >> slayer; }

    // fail for character
    if (cin.fail()) {
        cout << "Error: Invalid Number" << endl;
        return 0;
    }

    // fail for level under 3
    if (slayer < 1) {
        cout << "Error: Minimum combat level is 1\n";
        return 0;
    }

    // fail for level over 126
    if (slayer > 99) {
        cout << "Error: Maximum slayer level is 99\n";
        return 0;
    }

    // Proceed

    if (slayer >= 1 && slayer <= 99) {
        cout << "(T/t)urael" << endl;
        cout << "(D/d)uradel" << endl;
        cout << "(K/k)onar" << endl;
        cout << "Selection: ";
        cin >> selection;
    }

    switch(selection) {
        case 'T':
        case 't': 
        cout << endl;
        cout << left << setfill(' ') << setw(10) << "Monster" << setw(12) << "Probability" << setw(15) << right << "Max Assigned" << endl;
        cout << setw(37) << setfill('-') << "" << endl;
        cout << setfill(' ') << left << setw(10) << "Kalphite" << right << setw(11) << "74%" << setw(16) << "15" << endl;
        cout << setfill(' ') << left << setw(10) << "Ankou" << right << setw(11) << "24%" << setw(16) << "25" << endl;
        cout << setfill(' ') << left << setw(10) << "Dragon" << right << setw(11) << "0%" << setw(16) << "0" << endl;
        cout << setfill(' ') << left << setw(10) << "Boss" << right << setw(11) << "2%" << setw(16) << "1" << endl;
        break;

        // case D
        case 'D':
        case 'd':
        if (combat >= 100 && slayer >= 50) {
            cout << "good1";
            break;
        }
        else {
            cout << "Error: Must have combat level 100 and slayer level 50 to visit Duradel" << endl;
            break;
        }
        case 'K':
        case 'k':
        if (combat >= 75) {
            cout << "good3";
        }
        else {
            cout << "Error: Must have combat level 75 to visit Konar" << endl;
            break;
        }

    }
    return 0;
}
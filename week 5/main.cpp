#include <iostream>
#include <iomanip> // needed processory directive

// directions 
using namespace std;

int main() { // start
    // define variable
    int slayer = 0; // slayer level
    int combat = 0; //define combat levle
    char selection; //required for switches

    //ask for combat level
    cout << "Combat Level: ";
    cin >> combat;

    // Read Combat Level
    if (cin.fail()) { //cinfail for invalid numbers
        cout << "Error: Invalid number" << endl;
        return 0;
    }

    // fail for level under 3
    if (combat < 3) { //less than
        cout << "Error: Minimum combat level is 3\n";
        return 0;
    }

    // fail for level over 126
    if (combat > 126) {
        cout << "Error: Maximum combat level is 126\n";
        return 0;
    }
    // Read Player's Level
    if (combat >= 3 || combat <= 126) {
    cout << endl;
    cout << "Slayer Level: ";
    cin >> slayer; } //syntax

    // fail for character
    if (cin.fail()) {
        cout << "Error: Invalid number" << endl;
        return 0;
    }

    // fail for level under 3
    if (slayer < 1) {
        cout << "Error: Minimum slayer level is 1\n";
        return 0; //return 0 instead of break becaus enot in switch!
    }

    // fail for level over 126
    if (slayer > 99) {
        cout << "Error: Maximum slayer level is 99\n";
        return 0;
    }

    // Proceed

    if (slayer >= 1 && slayer <= 99) {
        cout << endl;
        cout << "(T/t)urael" << endl; //parenthesis
        cout << "(D/d)uradel" << endl;
        cout << "(K/k)onar" << endl;
        cout << "Selection: ";
        cin >> selection; //switches next
    }

    switch(selection) { //iomanip in the directions like setw amounts!
        case 'T':
        case 't': 
        cout << endl;
        cout << left << setfill(' ') << setw(11) << "Monster" << setw(11) << "Probability" << setw(15) << right << "Max Assigned" << endl;
        cout << setw(37) << setfill('-') << "" << endl;
        cout << setfill(' ') << left << setw(10) << "Kalphite" << right << setw(12) << "74%" << setw(15) << "15" << endl;
        cout << setfill(' ') << left << setw(10) << "Ankou" << right << setw(12) << "24%" << setw(15) << "25" << endl;
        cout << setfill(' ') << left << setw(10) << "Dragon" << right << setw(12) << "0%" << setw(15) << "0" << endl; //not half
        cout << setfill(' ') << left << setw(10) << "Boss" << right << setw(12) << "2%" << setw(15) << "1" << endl;
        break;// recall breaks
 
        // case D
        case 'D': //cases
        case 'd':
        if (combat >= 100 && slayer >= 75) { //superflous for iomanip 
        // make it equal to prevent 75 going to halved
        cout << endl;
        cout << left << setfill(' ') << setw(11) << "Monster" << setw(11) << "Probability" << setw(15) << right << "Max Assigned" << endl;
        cout << setw(37) << setfill('-') << "" << endl;
        cout << setfill(' ') << left << setw(10) << "Kalphite" << right << setw(12) << "30%" << setw(15) << "120" << endl;
        cout << setfill(' ') << left << setw(10) << "Ankou" << right << setw(12) << "50%" << setw(15) << "250" << endl; 
        cout << setfill(' ') << left << setw(10) << "Dragon" << right << setw(12) << "0%" << setw(15) << "0" << endl;
        cout << setfill(' ') << left << setw(10) << "Boss" << right << setw(12) << "20%" << setw(15) << "5" << endl;
        break;
        }

        if (combat >= 100 && slayer >= 50 && slayer < 75) { //fix kill counts!
        cout << "Kill counts halved because of slayer level" << endl;
        cout << "" << endl; //space between
        cout << left << setfill(' ') << setw(11) << "Monster" << setw(11) << "Probability" << setw(15) << right << "Max Assigned" << endl;
        cout << setw(37) << setfill('-') << "" << endl;
        cout << setfill(' ') << left << setw(10) << "Kalphite" << right << setw(12) << "30%" << setw(15) << "60" << endl; //pattern of kalphite
        cout << setfill(' ') << left << setw(10) << "Ankou" << right << setw(12) << "50%" << setw(15) << "125" << endl; //HALF ALL MAX ASSIGNED
        cout << setfill(' ') << left << setw(10) << "Dragon" << right << setw(12) << "0%" << setw(15) << "0" << endl; //new
        cout << setfill(' ') << left << setw(10) << "Boss" << right << setw(12) << "20%" << setw(15) << "2" << endl;
        break; 
        }
        else {
            cout << "Error: Must have combat level 100 and slayer level 50 to visit Duradel" << endl;
            break; //error break!
        }

        // final case switch
        case 'K':
        case 'k':
        if (combat > 75) { // remember condition
        cout << "" << endl;
        cout << left << setfill(' ') << setw(11) << "Monster" << setw(11) << "Probability" << setw(15) << right << "Max Assigned" << endl;
        cout << setw(37) << setfill('-') << "" << endl;
        cout << setfill(' ') << left << setw(10) << "Kalphite" << right << setw(12) << "25%" << setw(15) << "30" << endl;
        cout << setfill(' ') << left << setw(10) << "Ankou" << right << setw(12) << "35%" << setw(15) << "100" << endl;
        cout << setfill(' ') << left << setw(10) << "Dragon" << right << setw(12) << "20%" << setw(15) << "100" << endl;
        cout << setfill(' ') << left << setw(10) << "Boss" << right << setw(12) << "20%" << setw(15) << "2" << endl;
        break;
        }
        else {
            cout << "Error: Must have combat level 75 to visit Konar" << endl;
            break;
        }
        
        default:  //defaults if the character inputted is NOT the ones above 
            cout << "Error: Invalid slayer master selection";
            break; 

    } //end 
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    //defining
    string weapon1 = "Scimitar";
    string weapon2 = "Whip";
    int qty_Scimitar = 10;
    int qty_Whip = 5;
    double each1 = 59750.55, each2 = 1487961.22; 


    // Read scimitar quantity
    cout << "How many " << weapon1 << "s did you loot? ";
    cin >> qty_Scimitar;
    // Read whip quantity
    cout << "How many " << weapon2 << "s did you loot? ";
    cin >> qty_Whip;

    //total 
    double total_Scimitar = qty_Scimitar * each1;
    double total_Whip = qty_Whip * each2;

    //table
    cout << setw(15) << left << "Item" << right << setw(10) << "Qty" << setw(15) << "Each" << setw(15) << "Total" << endl;
    cout << setw(15) << left << weapon1 << right << setw(10) << qty_Scimitar << setw(15) << each1 << setw(15) << total_Scimitar << endl;
    cout << setw(15) << left << weapon2 << right << setw(10) << qty_Whip << setw(15) << each2 << setw(15) << total_Whip << endl;
    
    return 0;
}

//setw(int) where int is the number of spaces at minimum to provide for the next piece of data output

/* 
cout << fixed << setprecision(2) << setw(10) << left << weapon1 << right << setprecision(0) << setw(5) << qty_Scimitar << setw(15) << each1 << setw(15) << total_Scimitar << endl;
cout << fixed << setprecision(2) << setw(10) << left << weapon2 << right << setprecision(0) << setw(5) << qty_Whip << setw(15) << each2 << setw(15) << total_Whip << endl;
*/
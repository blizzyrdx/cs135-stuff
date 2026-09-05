#include <iostream>

using namespace std;

int main () {
    //define variables for user input
    int door_bundles = 0;
    int bundle_cost = 1000;

    //ask question and get user input
    cout << "How many door bundles are needed? ";
    cin >> door_bundles;
    cout << "How much does each bundle cost? ";
    cin >> bundle_cost;
    cout << "\n"; //space

    //space

    return 0;
}

/* Goal Of Assignment
alex-imac24@alex as1 % g++ main.cpp
alex-imac24@alex as1 % ./a.out
How many door bundles are needed? 3
How much does each bundle cost? $1000.00

Bundle Quantity: 3
Bundle Cost: $1000
Total Doors Purchased: 300
Single Door Cost: $10
Total Cost: $3000
Single Door Sale Price: $17.5
Total Sale Price: $5250
Single Door Profit: $7.5
Total Profit: $2250
*/
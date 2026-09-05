#include <iostream>

using namespace std;

int main () {
    //constants from assignment
    const double Bundlesize = 100;
    const double Markup = 0.75;

    //variables from user input
    int door_bundles; //integer 
    double bundle_cost; //double for decimal values

    //ask question and get user input
    cout << "How many door bundles are needed? ";
    cin >> door_bundles;
    cout << "How much does each bundle cost? ";
    cin >> bundle_cost;
    cout << "\n"; //space

    //equations
    double DoorsTotal = door_bundles * Bundlesize;
    double CostDoor = bundle_cost / Bundlesize;
    double TotalCost = door_bundles * bundle_cost;
    double SalePriceDoor = CostDoor + CostDoor * Markup;
    double TotalSalesPrice = SalePriceDoor * DoorsTotal;
    double ProfitPerDOor = SalePriceDoor - CostDoor;
    double TotalProfit = ProfitPerDOor * DoorsTotal;

    //output results to user
    cout << "Bundle Quantity: " << door_bundles << endl;
    cout << "Bundle Cost: " << bundle_cost << endl;
    cout << "Total Doors Purchased: " << DoorsTotal << endl;
    cout << "Single Door Cost: " << CostDoor << endl;
    cout << "Total Cost: " << TotalCost << endl;
    cout << "Single Door Sale Price: " << SalePriceDoor << endl;
    cout << "Total Sale Price: " << TotalSalesPrice << endl;
    cout << "Single Door Profit: " << ProfitPerDOor << endl;
    cout << "Total Profit: " << TotalProfit << endl;

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
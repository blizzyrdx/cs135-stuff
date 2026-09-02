#include <iostream>

using namespace std;

int main () {
    int user_weight, run_energy;
    cout << "Enter your weight (lbs): ";
    cin >> user_weight;
    cout << "Enter the amount of energy you burn per mile (calories): ";
    cin >> run_energy;

     // Calculations

    int drainrate = sqrt(user_weight) * 0.3;
    int timetil0 = run_energy / drainrate;
    cout << "Time until zero energy: " << timetil0 << " minutes" << endl;


    return 0;
}

/* implicit typecast is when the program automatically converts one data type to another
results in floating point value 
static_cast<newtype>(expression) is used to convert one data type to another

*/
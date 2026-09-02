#include <iostream> //preprocessor directive that allows compiler to include the contents of the iostream file in the program
#include <cmath>

using namespace std;

int main () {
    double user_weight, run_energy;
    cout << "Enter your weight (lbs): ";
    cin >> user_weight;
    cout << "Enter the amount of energy you burn per mile (calories): ";
    cin >> run_energy;

     // Calculations (added cmath for floor and sqrt functions)

    double drainrate = floor(sqrt(user_weight) * 0.3);
    double timetil0 = floor(run_energy / drainrate);
    cout << "Time until zero energy: " << timetil0 << " minutes" << endl;


    return 0;
}

/* implicit typecast is when the program automatically converts one data type to another
results in floating point value 
static_cast<newtype>(expression) is used to convert one data type to another

static_cast<double>(7) / 2 results in 3.5 since 7 is converted to a double before the division occurs and then
the 2 is converted to a double as well.

static_cast<double>(7 / 2) results in 3 since the division occurs first and then the result is converted to a double.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main () {

    // define two floating-point numbers from user input

    double num1 = 0; //define first
    double num2 = 0;
    cout << "Enter the first number (floating-point): ";
    cin >> num1;
    cout << "Enter the second number (floating-point): ";
    cin >> num2;
    cout << "" << endl; //remember the space!
    cout << "Floating-point results:" << endl; //another space

    // Operations 

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "" << endl;
    cout << "Integer results (using truncated values):" << endl; 
    cout << "Integer Division Quotient: " << (int)num1 / (int)num2 << endl; // integer division
    cout << "Modulus: " << (int)num1 % (int)num2 << endl; // use modulus operator to find remainder of integer division

    return 0;
}

// static_cast is a safer way to convert data types but can be weird with some data types
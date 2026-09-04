#include <iostream>

using namespace std;

int main () {

    // define two floating-point numbers from user input

    double num1 = 0;
    double num2 = 0;
    cout << "Enter the first number (floating-point): ";
    cin >> num1;
    cout << "Enter the second number (floating-point): ";
    cin >> num2;
    cout << "Floating-point results:" << endl;

    // Operations 

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "" << endl;
    cout << "Integer results (using truncated values):" << endl; 
    cout << "Integer Division Quotient: " << (int)num1 / (int)num2 << endl;
    cout << "Modulus: " << (int)num1 % (int)num2 << endl;

    return 0;
}
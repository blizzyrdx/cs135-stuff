#include <iostream>

using namespace std;

int main () {
    double num1, num2;
    cout << "Enter the first number (floating-point): ";
    cin >> num1;
    cout << "Enter the second number (floating-point): ";
    cin >> num2;
    cout << "Floating-point results:" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "" << endl;
    cout << "Integer results (using truncated values):" << endl; 
    cout << "Integer Division Quotient: " << endl;
    return 0;
}

/* Goal Of Lab
Enter the first number (floating-point): 12.7
Enter the second number (floating-point): 3.4

Floating-point results:
Sum: 16.1
Difference: 9.3
Product: 43.18
Quotient: 3.73529

Integer results (using truncated values):
Integer Division Quotient: 4
Modulus: 0 */
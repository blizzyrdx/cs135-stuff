#include <iostream>

using namespace std;

int main() {
    // define variable
    int level = 0;
    char selection;
    // Read Player's Level
    cout << "Combat Level: ";

    // fail for character
    if (cin.fail()) {
        cout << "Error: Invalid Number";
        return 0;
    }

    // fail for level under 3
    if (level < 1) {
        cout << "Error: Minimum combat level is 1\n";
        return 0;
    }

    // fail for level over 126
    if (level < 99) {
        cout << "Error: Maximum slayer level is 99\n";
        return 0;
    }
    return 0;
}
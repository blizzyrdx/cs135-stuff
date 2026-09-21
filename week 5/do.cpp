#include <iostream>

using namespace std;

int main() {

    int combatlvl = 0; 

    do
    {
        cout << "Combat Level: ";
        cin >> combatlvl;
        if (cin.fail() || combatlvl < 3 || combatlvl > 126)
        {
            cout << "error: Combat level must be btween 3 and 126\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
    
    } while(cin.fail() || combatlvl < 3 || combatlvl > 126);
    return 0;
}
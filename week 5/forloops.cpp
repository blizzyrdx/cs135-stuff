#include <iostream>

using namespace std;

int main() {
    int iterations = 1;

    do {
        if (cin.fail() || iterations < 1 || iterations > 100)
        {
            cout << "Error: Iterations must be between 1 and 100\n";
            cin.clear();
            cin.ignore(256, '\n');

        }
        cout << "How many numbers 1- value do you want to see? ";
        cin >> iterations;
     } while(cin.fail() || iterations < 1 || iterations > 100);


    for (int i = 0; i < iterations; i++)
    {
        cout << i << endl;
    }
    return 0;

}

/* 

for (e1; e2; e3) {
 // run when e2 is true
 }



*/
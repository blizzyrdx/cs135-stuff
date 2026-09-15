#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    // Read x and y from person then read monster's x and y
    int player_x = 0;
    int player_y = 0;
    int monster_x = 10;
    int monster_y = 10;
    //display
    cout << "Player x: ";
    cin >> player_x;
    cout << "Player y: ";
    cin >> player_y;
    cout << "\n";
    cout << "Monster x: ";
    cin >> monster_x;
    cout << "Monster y: ";
    cin >> monster_y;
    cout << "\n";

    // Formulas given to compute distance along x and y axis and save into INTEGER
    int xDist = abs(player_x - monster_x);
    int yDist = abs(player_y - monster_y);

    // Compute the manhattan and euclidian and save into FLOAT
    double manhattanDist = xDist + yDist; 
    double euclidianDist = sqrt(pow(xDist, 2) + pow(yDist, 2));

    // Output with iomanip 
    // X-Axis
    cout << "Distances from Player to Monster:\n";
    cout << "X-Axis:" << setw(15) << setfill ('.') << xDist << "\n";
    cout << "p" << setw(xDist + 2) << setfill ('-') << "m\n";
    cout << "\n";

    // Y-Axis
    cout << "Y-Axis:" << setw(15) << setfill ('.') << yDist << "\n";
    cout << "p" << setw(yDist + 2) << setfill ('-') << "m\n";
    cout << "\n";
   
    // Manhattan
    cout << "Manhattan:" << setw(12) << setfill ('.') << manhattanDist << "\n";
    cout << "p" << setw(manhattanDist + 2) << setfill ('-') << "m\n";
    cout << "\n";

    // Euclidian
    cout << "Euclidean:" << setw(12) << setfill ('.') << fixed << setprecision(2) << euclidianDist << "\n";
    cout << "p" << setw(euclidianDist + 2) << setfill ('-') << "m\n";
    cout << "\n";

    return 0;
}
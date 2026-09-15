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
    double euclidianDist = sqrt((xDist * xDist) + (yDist * yDist));

    // Output with iomanip 
    // X-Axis
    cout << "Distances from Player to Monster: \n";
    cout << "X-Axis:" << setw(22) << setfill ('.') << xDist << "\n";
    cout << "p" << setw(xDist) << setfill ('-') << "m\n";
    cout << "\n";

    // Y-Axis
    cout << "Y-Axis:" << setw(22) << setfill ('.') << yDist << "\n";
    cout << "p" << setw(yDist) << setfill ('-') << "m\n";
    cout << "\n";
   
    // Manhattan
    cout << "Manhattan:" << setw(22) << setfill ('.') << manhattanDist << "\n";
    cout << "p" << setw(yDist) << setfill ('-') << "m\n";
    cout << "\n";

    // Euclidian
    cout << "Euclidian:" << setw(22) << setfill ('.') << euclidianDist << "\n";
    cout << "p" << setw(euclidianDist) << setfill ('-') << "m\n";
    cout << "\n";

    return 0;
}
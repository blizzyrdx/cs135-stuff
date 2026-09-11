#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    //Constant Spells
    const int Fire_Bolt = 12;
    const int Fire_Blast = 16;
    const int Fire_Wave = 20;
    int magic_level = 0;
    int magic_bonus = 0;
    double Base_Damage = 0;

    //Prompt user to enter magic level and magic bonus
    //integer values for input
    cout << "Enter your Magic level: ";
    cin >> magic_level;
    cout << "Enter your Magic bonus: ";
    cin >> magic_bonus;

    //Magic Hit Formula
    double max_hit = floorf(Base_Damage * (1 + magic_level/100) * sqrt(1 + magic_bonus/100));

    //Table Output
    return 0;
}
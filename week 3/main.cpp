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

    //Prompt user to enter magic level and magic bonus
    //integer values for input
    cout << "Enter your Magic level: ";
    cin >> magic_level;
    cout << "Enter your Magic bonus: ";
    cin >> magic_bonus;
    cout << "\n";

    //Magic Hit Formula
    int max_hitBolt = floor(Fire_Bolt * (1 + (magic_level/100)) * sqrt(1 + (magic_bonus/100)));
    int max_hitBlast = floor(Fire_Blast * (1 + (magic_level/100)) * sqrt(1 + (magic_bonus/100)));
    int max_hitWave = floor(Fire_Wave * (1 + (magic_level/100)) * sqrt(1 + (magic_bonus/100)));

    //Table Output
    cout << setw(13) << left << "Spell" << setw(11) << "BaseDmg" << setw(8) << "Level" << setw(5) << right << "Bonus" << setw(9) << "MaxHit\n";
    cout << setw(46) << setfill('-') << "\n";
    cout << setfill(' ') << setw(13) << left << "Fire Bolt" << setw(11) << Fire_Bolt << setw(8) << magic_level << setw(5) << right << magic_bonus << setw(9) << max_hitBolt << endl;
    cout << setfill(' ') << setw(13) << left << "Fire Blast" << setw(11) << Fire_Blast << setw(8) << magic_level << setw(5) << right << magic_bonus << setw(9) << max_hitBlast << endl;
    cout << setfill(' ') << setw(13) << left << "Fire Wave" << setw(11) << Fire_Wave << setw(8) << magic_level << setw(5) << right << magic_bonus << setw(9) << max_hitWave << endl;

    return 0;
}
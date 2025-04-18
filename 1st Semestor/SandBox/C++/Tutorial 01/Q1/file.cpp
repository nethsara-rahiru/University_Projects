#include <iostream>
using namespace std;

int main() {
    double mass, initialTemp, finalTemp, energy;

    cout << "Enter the amount of water in kilograms: ";
    cin >> mass;
    cout << "Enter the initial temperature: ";
    cin >> initialTemp;
    cout << "Enter the final temperature: ";
    cin >> finalTemp;

    energy = mass * (finalTemp - initialTemp) * 4184;

    cout << "The energy needed is " << energy << " joules." << endl;

    return 0;
}

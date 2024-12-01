#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter three sides of a triangle" << endl;
    cin >> side1 >> side2 >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
        cout << "The given sides form a triangle." << endl;
    else
        cout << "The given sides do not form a triangle." << endl;

    return 0;
}

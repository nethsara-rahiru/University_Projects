#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265;
    double r, side, perimeter, area;

    cout << "Enter the length from the center to a vertex: ";
    cin >> r;

    side = 2 * r * sin(PI / 5);
    perimeter = 5 * side;
    area = (5 * pow(side, 2)) / (4 * tan(PI / 5));

    cout << "The length of a side of the pentagon is " << side << endl;
    cout << "The perimeter of the pentagon is " << perimeter << endl;
    cout << "The area of the pentagon is " << area << endl;

    return 0;
}

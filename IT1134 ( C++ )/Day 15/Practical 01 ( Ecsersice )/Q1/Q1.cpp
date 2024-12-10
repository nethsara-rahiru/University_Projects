#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int A, B,C;
    int Ax, Ay, Bx, By, Cx, Cy;
    int s, Area;

    cout << "Enter the coordinates of the first vertex (x1, y1): ";
    cin >> Ax;
    cin >> Ay;
    cout << "Enter the coordinates of the second vertex (x2, y2): ";
    cin >> Bx;
    cin >> By;
    cout << "Enter the coordinates of the third vertex (x3, y3): ";
    cin >> Cx;
    cin >> Cy;

    A = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2) );
    C = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2) );
    B = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2) );

    cout << "Length of side a: " << A << endl;
    cout << "Length of side b: " <<  B << endl;
    cout << "Length of side c: " <<  C << endl;

    s = (A + B + C) / 2;
    Area = sqrt( s*(s-A)*(s-B)*(s-C) );
    cout << "Area of the triangle: " << Area;
}

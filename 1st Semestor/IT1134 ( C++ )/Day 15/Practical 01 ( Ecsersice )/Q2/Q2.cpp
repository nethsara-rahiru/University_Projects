#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the lengths of three sides of the triangle: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if ( a + b > c || c + b > a || a + c > b )
    {
        if ( a == b && b == c)
        {
            cout << "Triangle Type: Equilateral Triangle";
        }
        else if ( a == b || b == c || a == c)
        {
            cout << "Triangle Type: Isosceles Triangle";
        }
        else
        {
            cout << "Triangle Type: Scalene Triangle";
        }
    }
    else
    {
        cout << "The given sides do not form a valid triangle!";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

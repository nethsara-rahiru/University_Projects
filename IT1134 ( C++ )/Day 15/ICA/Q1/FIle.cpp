#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int input;
    int a;
    int b;
    int c;

    cout << "Enter a three-digit integer: ";
    cin >> input;

    if ( input > 999 || input < 100 )
    {
        cout << "Not valid";
    }
    else
    {
        a = input / 100;
        b = input / 10 % 10;
        c = input % 10;

        if ( a > b && a > c)
        {
            cout << min(b, c) << max(b, c) << a;
        }
         if ( b > a && b > c)
        {
            cout << min(a, c) << max(a, c) << b;
        }
         if ( c > b && c > a)
        {
            cout << min(a, b) << max(a, b) << c;
        }
    }
}

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Please enter your first number  : ";
    cin >> a;
    cout << "Please enter your second number : ";
    cin >> b;
    cout << "Please enter your third number  : ";
    cin >> c;

    if ( a > b)
    {
        if ( a > c)
        {
            cout << "The largest number is " << a;
        }
    }
    else if ( b > a)
    {
        if ( b > c)
        {
            cout << "The largest number is " << b;
        }
    }
    else if ( c > b)
    {
        if ( c > a)
        {
            cout << "The largest number is " << c;
        }
    }
}

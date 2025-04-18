#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Please enter the lengths" << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;

    if ( a > b)
    {
        if ( a > c)
        {
            swap( a, c);
        }
    }
    else if ( b > a)
    {
        if ( b > c)
        {
            swap( b, c);
        }
    }

    if ( a + b >= c)
    {
        cout << "It is a valid triangle";
    }
    else
    {
        cout << "It is not a valid triangle";
    }
}

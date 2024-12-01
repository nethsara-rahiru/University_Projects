#include<iostream>
using namespace std;

int main ()
{
    int a, b, c;

    cout << "Please input the lengths" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if ( ( a + b ) >= c && ( c + b ) >= a && ( a + c ) >= b )
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

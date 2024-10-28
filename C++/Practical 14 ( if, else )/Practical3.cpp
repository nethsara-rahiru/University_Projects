#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    string o;

    cout << "Please enter a number          :";
    cin >> a;
    cout << "Please enter the second number :";
    cin >> b;
    cout << "Please enter the operation     :";
    cin >> o;

    if ( o == "+" )
    {
        cout << a + b;
    }
    else if ( o == "-" )
    {
        cout << a - b;
    }
    else if ( o == "*" )
    {
        cout << a * b;
    }
    else if ( o == "/" )
    {
        cout << a / b;
    }
    else
    {
        cout << "invalid operation !";
    }
}
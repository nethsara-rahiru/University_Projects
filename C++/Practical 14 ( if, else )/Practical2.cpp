#include<iostream>
using namespace std;

int main ()
{
    int num;
    int rem;

    cout << "Please enter a Number :";
    cin >> num;

    rem = num % 2;

    if ( rem == 0 )
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The number is Odd";
    }
}
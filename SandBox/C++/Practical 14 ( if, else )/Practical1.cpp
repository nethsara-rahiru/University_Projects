#include<iostream>
using namespace std;

int main ()
{
    int num;

    cout << "Please enter a number";
    cin >> num;

    if (num < 0)
    {
        cout << "The number is Negitive";
    }
    else if (num > 0)
    {
        cout << "The number is Positive";
    }
    else
    {
        cout << "The number is Zero";
    }
}
#include<iostream>
using namespace std;

int main()
{
    int input;
    int fact = 1;

    cout << "Please input a number : ";
    cin >> input;

    for ( input ; input > 0 ; input-- )
    {
        fact = fact *  input;
    }
    cout << fact;
}

#include<iostream>
using namespace std;

int main ()
{
    //define variables
    int num;

    //Get inputs
    cout << "Please enter a number : ";
    cin >> num;

    if (num > 0)         // Checking is the input in bigger than 0
    {
        cout << "The number is Positive";
    }
    else if(num < 0)    // Checking is the input in smaller than 0
    {
        cout << "The number is Negative";
    }
    else                // the number which is not positive or negative in 0
    {
        cout << "The number is Zero";
    }
    return 0;
}

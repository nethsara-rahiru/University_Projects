#include<iostream>
using namespace std;

int main ()
{
    // Define variables
    int num;
    int rem;

    // Getting input
    cout << "Please enter a number : ";
    cin >> num;

    // Dividing by two to find the reminder
    rem = num%2;

    // Check statements
    if (rem == 0)   // If reminder is 0, it is Even
    {
        cout << "The number in Even";
    }
    else            // If reminder is not 0, it is Odd
    {
        cout << "The number in Odd";
    }
    return 0;
}

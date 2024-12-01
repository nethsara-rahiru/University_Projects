#include<iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Please enter the marks : ";
    cin >> mark;

    if ( mark >= 90)
    {
        cout << "Grade A";
    }
    else if ( mark >= 80 && mark < 90)
    {
        cout << "Grade B";
    }
    else if ( mark >= 70 && mark < 80)
    {
        cout << "Grade C";
    }
    else if ( mark >= 60 && mark < 70)
    {
        cout << "Grade D";
    }
    else if ( mark < 60)
    {
        cout << "Grade F";
    }
}

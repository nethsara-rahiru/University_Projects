#include<iostream>
using namespace std;

int main()
{
    //Variables
    int row;

    //User Input
    cout << "Enter number of rows : ";
    cin >> row;

    //Code
    for ( int l = 1; l <= row; l++ )
    {
        for (int s = 1; s <= l; s++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

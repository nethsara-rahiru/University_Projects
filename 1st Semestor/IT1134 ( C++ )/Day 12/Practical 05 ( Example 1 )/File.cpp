
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
     for ( int l = 0; l <= row; l++ )
    {
        for (int space = row - 1; space >= l; space--)
        {
            cout << " ";

        }
        for (int star = 0; star <= l; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

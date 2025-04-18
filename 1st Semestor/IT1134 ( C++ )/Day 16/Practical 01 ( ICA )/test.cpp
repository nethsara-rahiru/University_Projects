
#include<iostream>
using namespace std;

int main()
{
    int row = 10;

    for (int rows = 0; rows <= row; rows++)
        {
            for (int star = row; star > rows; star--)
            {
                cout << " ";
            }
            for (int star = 0; star < 2*rows-1; star++)
            {
                cout << "*";
            }
            cout << endl;
        }
}

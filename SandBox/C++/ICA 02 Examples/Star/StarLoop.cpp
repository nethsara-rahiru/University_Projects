#include<iostream>
using namespace std;

int main()
{
    int star;
    for(int row = 5; row > 0; row--)
    {
        for(star = 0; star < row; star++)
        {
            cout << "*";
        }
        if(star != 1)
        {
            cout << endl;
        }
    }
    for(int row = 0; row <= 5; row++)
    {
        for(star = 5; star > 5 - row; star--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
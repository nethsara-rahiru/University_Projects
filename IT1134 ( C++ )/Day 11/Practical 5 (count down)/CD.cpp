#include<iostream>
using namespace std;

int main ()
{
    for ( int i = 50; i > 0; i--)
    {
        if ( i % 7 == 0)
        {
           break;
        }
        cout << i << endl;
    }
}

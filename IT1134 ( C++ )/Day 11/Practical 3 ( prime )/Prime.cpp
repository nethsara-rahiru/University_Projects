#include<iostream>
using namespace std;

int main ()
{

    for ( int i = 1; i <= 100; i++)
    {
        bool a = true;
        if ( i == 1)
        {
            a = false;
        }
        else
        {
            for (int j = 2; j <= i - 1; j++)
            {
                if ( i % j == 0 )
                {
                    a = false;
                    break;
                }
            }
        }
        if( a )
        {
            cout << i << endl;
        }
    }
    return 0;
}

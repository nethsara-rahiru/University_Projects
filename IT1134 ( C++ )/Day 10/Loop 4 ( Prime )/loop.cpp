#include<iostream>
using namespace std;

int main ()
{
    int num = 8;
    bool pri = 0;

    for ( int a = 1 ; a <= 10 ; a++)
    {
        if ( pri == 0)
            {
                //cout << "                a - " << a << endl;
                for ( int i = 2 ; i < a ; i++ )
                {
                    //cout << "i - " << i << endl;
                        if ( a % i == 0)
                        {
                            pri =1;
                        }
                        else
                        {
                            pri = 0;
                        }
                }
                if (pri != 1)
                {
                    cout << a << endl;
                    pri = 0;
                }
        }
    }
}

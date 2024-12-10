#include<iostream>
using namespace std;

int main()
{
    //Variables
    int x = 15;

    //While loop
    cout << "While loop output : " << endl;
    while ( x < 10 )
    {
        cout << "     x = " << x << endl;
        x++;
    }


    //do-While loop
    cout << "do-While loop output : " << endl;
    do
    {
        cout << "     x = " << x << endl;
        x++;
    }
    while ( x < 10 );


    return 0;
}

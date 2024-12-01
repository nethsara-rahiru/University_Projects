#include<iostream>;
using namespace std;

int main()
{
    int x=10, y=20;

    cout<<"x-- = "<<x--<<endl;  // 10
    cout<<"x   = "<<x<<endl;    // 9

    cout<<"--y = "<<--y<<endl;  // 19
    cout<<"y   = "<<y--<<endl;  // 19

    int z = ++y/++x;            // y=19 x=10  --> 20/10
    cout<<"x   ="<<x++<<endl;   // x = 11   print:10
    cout<<"x   ="<<++x<<endl;   // x = 12   print:12
    cout<<"z   = "<<z<<endl;    // 2

    int a=(y++)-(--x);          // 21-11
    cout<<"a   = "<<a<<endl;    // a = 10

    int b=--y + --x;            // 20 + 10
    cout<<"b   = "<<b<<endl;    // b = 30
    return 0;
}

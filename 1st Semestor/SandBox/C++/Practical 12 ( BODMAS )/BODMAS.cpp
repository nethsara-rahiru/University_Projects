#include<iostream>
using namespace std;

int main()
{
    int a = 5 + 6 * 2;
    int b = (5 + 6) * 2;
    int c = 6 + 7 * 2 - 3;
    int d = 6 + 9 / 3 - 3;

    cout << "5 + 6 * 2      = " << a << endl;
    cout << "(5 + 6) * 2    = " << b << endl;
    cout << "6 + 7 * 2 - 3  = " << c << endl;
    cout << "6 + 9 / 3 - 3  = " << d << endl;
}
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int a = 5 - i; a > 0; a--)
        {
            cout << "   ";
        }
        for (int a = 1; a <= 2 * i - 1; a++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
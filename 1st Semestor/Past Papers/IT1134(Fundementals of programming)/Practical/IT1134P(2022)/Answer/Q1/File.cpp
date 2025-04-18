#include<iostream>
using namespace std;


void celsius(double input)
{
    cout << ( input - 32 ) * 5 / 9 << endl;
}
void fahrenheit(double input)
{
    cout << input * 9 / 5 + 32 << endl;
}
int main()
{
    cout << "Celsius -> Fahrenheit" << endl;
    for (double i = 0; i <= 100; i++)
    {
        cout << i << "   ->   ";
        celsius(i);
    }

    cout << endl;
    cout << "Fahrenheit -> Celsius" << endl;
    for (double i = 32; i <= 212; i++)
    {
        cout << i << "   ->   ";
        fahrenheit(i);
    }
}
#include<iostream>
using namespace std;

int main ()
{
    int a;
    int b;
    string c;

    cout << "Please enter a Number          :";
    cin >> a;
    cout << "Please enter the second Number :";
    cin >> b;
    cout << "What should I do ?             :";
    cin >> c;

    if(c == "+")
    {
        cout << a + b;
    }
    else if (c == "-")
    {
        cout << a - b;
    }
    else if (c == "*")
    {
        cout << a * b;
    }
    else if (c == "/")
    {
        cout << a / b;
    }
    else
    {
        cout << "Invalid input !";
    }
    return 0;
}

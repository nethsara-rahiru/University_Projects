#include<iostream>
using namespace std;

int Funtion1(int a, int b)
{
    int sum;
    sum = a + b;
    cout << sum;

}
int main ()
{ 
    int a;
    int b;
    cin >> a;
    cin >> b;
    Funtion1(a, b);
}
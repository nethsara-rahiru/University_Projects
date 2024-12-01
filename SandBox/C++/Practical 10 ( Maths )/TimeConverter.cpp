#include<iostream>
using namespace std;

int main ()
{
    int t, h, m, s;
    cout<<"Enter the hour     : ";
    cin>>h;
    cout<<"Enter the minete   : ";
    cin>>m;
    cout<<"Enter the seconds  : ";
    cin>>s;

    t=h*60*60 + m*60 + s;
    cout<<"There is "<<t<<" seconds";
}
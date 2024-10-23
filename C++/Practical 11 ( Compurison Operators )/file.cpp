#include<iostream>
using namespace std;

int main()
{
    //Getting input
    int a, b;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;

    //Calculations
    bool A = (a>b);
        cout<<A<<endl;

    bool B = (a>=b);
        cout<<B<<endl;

    bool C = (a<b);
        cout<<C<<endl;

    bool D = (a<=b);
        cout<<D<<endl;

    bool E = (a==b);
        cout<<E<<endl;

    bool F = (a!=b);
        cout<<F<<endl;

}
#include<iostream>
using namespace std;

int main()
{
    double c;
    double f;

    cout<<"Please input the temperature in C"<<endl;
    cin>>c;
    cout<<"The temperature in "<<(c*9/5)+32<<"F"<<endl;

    cout<<"Please input the temperature in F"<<endl;
    cin>>f;
    cout<<"The temperature in "<<(f-32)*5/9<<"C"<<endl;
}
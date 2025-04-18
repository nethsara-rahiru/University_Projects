#include<iostream>
using namespace std;

int main()
{
    double temp1;
    double temp2;

    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>temp1;
    cout<<"It's "<<(temp1*9/5)+32<<"F"<<endl;

    cout<<"Enter the temperature in Fahrenheit"<<endl;
    cin>>temp2;
    cout<<"It's "<<(temp2-32)*5/9<<"C"<<endl;
}

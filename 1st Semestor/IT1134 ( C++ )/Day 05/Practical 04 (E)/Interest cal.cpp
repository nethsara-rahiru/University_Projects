#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double pa;
    double rate;
    double time;
    double si;
    double ci;

    cout<<"Please enter your Principal Amount      : ";
    cin>>pa;
    cout<<"Please enter the Rate                   : ";
    cin>>rate;
    cout<<"Please enter your time period ( in y )  : ";
    cin>>time;

    si = pa*rate*time/100;
    ci = pa  *  pow(  (1 + rate/100), time   ) - pa;

     cout<<" ____________________________________________________";
    cout<<endl<<"|";
    cout<<endl<<"|   The Simple Interst is : "<< si;
    cout<<endl<<"|   The Compound Interst is : "<< ci <<endl;
    cout<<"|"<<endl;
    cout<<" ____________________________________________________"<<endl;
}

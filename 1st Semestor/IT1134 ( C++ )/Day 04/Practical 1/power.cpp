#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    double a_,b_;

    cout<<"Please enter a number"<<endl<<"a : ";
    cin>>a;
    cout<<"Please enter the second number"<<endl<<"b : ";
    cin>>b;

    cout<<"---------------------------------------------------";

    cout<<endl<<"a^b = "<<pow(a,b)<<endl;
    a_=sqrt(a);
    b_=sqrt(b);
    cout<<endl<<"a^1/2 = "<<a_<<endl;
    cout<<"b^1/2 = "<<b_<<endl<<endl;

    cout<<"The MIN is : "<<min(a,b)<<endl;
    cout<<"The MAX is : "<<max(a,b)<<endl<<endl;

    cout<<round(a_)<<endl;
    cout<<round(b_)<<endl;

    cout<<"---------------------------------------------------";
}

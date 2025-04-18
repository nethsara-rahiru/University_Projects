#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int h, r;

    //Input
    cout<<"Please enter the Height of the Cylinder : ";
    cin>>h;
    cout<<"Please enter the Radius of the Cylinder : ";
    cin>>r;

    //Calculate Volume
    cout<<"The volume is "<<M_PI*pow(r,2)*h<<endl;

    //Calculate Area
    cout<<"The Area is "<<2*M_PI*r*(r+h)<<endl;

}
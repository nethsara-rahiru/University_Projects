#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double r, h;
    cout<<"Please input the radius of the cylinder : ";
    cin>>r;
    cout<<"Please input the height of the cylinder : ";
    cin>>h;

    cout<<" ____________________________________________________";
    cout<<endl<<"|";
    cout<<endl<<"|   The volume of the cylinder is : "<< M_PI*pow(r, 2)*h;
    cout<<endl<<"|   The volume of the cylinder is : "<< 2*M_PI*r*h+4*pow(r, 2)*2 <<endl;
    cout<<"|"<<endl;
    cout<<" ____________________________________________________"<<endl;
}

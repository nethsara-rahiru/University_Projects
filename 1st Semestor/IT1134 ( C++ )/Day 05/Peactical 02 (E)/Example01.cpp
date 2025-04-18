#include<iostream>
using namespace std;

int main()
{
    int h;
    int m;
    int s;
    int timr;

    cout<<"Please enter the hours   :";
    cin>>h;
    cout<<"Please enter the minutes :";
    cin>>m;
    cout<<"Please enter the seconds :";
    cin>>s;

    timr = s+m*60+h*60*60;
    cout<<endl<<"There are "<<timr<< "seconds in " <<h<<":"<<m<<":"<<s<<endl;
}

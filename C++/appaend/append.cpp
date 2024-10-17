#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string fn;
    string ln;
    cout<<"Please input your first name : ";
    getline(cin, fn);
    cout<<"Please input your last name  : ";
    getline(cin, ln);

    cout<<fn + " " + ln<<endl;
    cout<<fn.append(ln)<<endl;
}
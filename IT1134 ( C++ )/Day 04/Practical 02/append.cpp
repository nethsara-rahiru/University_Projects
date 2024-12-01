#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string fn;
    string ln;

    cout<<"Enter your first name : ";
    getline(cin, fn);
    fn = fn.append(" ");

    cout<<"Enter your last name : ";
    getline(cin, ln);

    //cout<<"Your full name is : "<<fn + ln;
    cout<<"Your full name is : "<<fn.append(ln);
}



#include<iostream>

using namespace std;

int main()
{
    string ct;
    string con;

    cout<<"Hi There"<<endl<<"In which City do you live?"<<endl;
    cin>>ct;
    cin.ignore();
    cout<<"What is your country?"<<endl;
    getline(cin,con);
    cout<<"You live in "<<ct<<", "<<con<<endl;
    return 0;
}

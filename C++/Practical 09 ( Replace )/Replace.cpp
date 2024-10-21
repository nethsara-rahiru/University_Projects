#include<iostream>
using namespace std;

int main()
{
    string text;
    cout<<"Pleace enter a text : ";
    getline(cin, text);
    text[0]='Q';
    cout<<text;
}
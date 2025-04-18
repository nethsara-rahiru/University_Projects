#include<iostream>
using namespace std;

int main()
{
    string text;
    cout<<"Please enter a text : ";
    getline(cin, text);
    cout<<"There is "<<text.length()<<" letters in the text";
}
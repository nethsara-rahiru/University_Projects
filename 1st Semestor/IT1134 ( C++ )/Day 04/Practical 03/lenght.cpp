#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    cout<<"Please input a word"<<endl;
    string input;
    getline(cin, input);
    cout<<"There are "<<input.length()<<" letters in that word";
}

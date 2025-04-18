#include<iostream>
using namespace std;

int main()
{
    string text;

    cout << "Please enter a text" << endl;
    getline( cin, text );

    cout << "There are " << text.length() << " in the text" << endl;
    text[7] = 'S';
    cout << text;
}

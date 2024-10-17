#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Please enter two numbers"<<endl;
    cin>>x;
    cin>>y;

    cout<<"X + Y = "<<x+y<<endl;
    cout<<"X - Y = "<<x-y<<endl;
    cout<<"X x Y = "<<x*y<<endl;
    cout<<"X / Y = "<<x/y<<endl;
    cout<<"X % Y = "<<x%y<<endl;

    cout<<"X++ = "<<x++<<endl;
    cout<<"++X = "<<++x<<endl;

    cout<<"X-- = "<<x++<<endl;
    cout<<"--X = "<<++x<<endl;
}
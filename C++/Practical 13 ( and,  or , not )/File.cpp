#include<iostream>
using namespace std;

int main ()
{
    int age = 25;
    bool isStudent = true;

    bool x = ( age > 18 && isStudent );
    bool y = ( age < 18 || isStudent );
    bool z = !( age < 18 || isStudent );

    cout << " ( age > 18 && isStudent ) is :" << x << endl;
    cout << " ( age < 18 || isStudent ) is :" << y << endl;
    cout << "!( age < 18 || isStudent ) is :" << z << endl;
}
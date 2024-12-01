#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int no1;
    int no2;

    cout << "Please enter your first number" << endl;
    cin >> no1;

    cout << "Please enter your first number" << endl;
    cout << "( Do not enter 0 !)" << endl;
    cin >> no2;

    cout << "Sum        - " << no1 + no2 << endl;
    cout << "Difference - " << max( no1, no2 ) - min( no1, no2 ) << endl;
    cout << "Product    - " << no1 * no2 << endl;
    if ( no2 != )
    cout << "Module     - " << no1 %  no2 << endl;
    cout << "Quotient   - " << no1 / no2 << endl;
}

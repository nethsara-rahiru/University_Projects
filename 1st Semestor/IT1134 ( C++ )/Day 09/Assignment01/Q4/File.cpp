#include<iostream>
using namespace std;

int main()
{
    double w, m;
    double g = 9.81;

    cout << "Please enter the Mass in Kg" << endl;
    cin >> m;

    w = m * g;
    cout << w;
}

#include <iostream>
using namespace std;

int main() {
    double salary, tax = 0;

    cout << "Please input your salary: ";
    cin >> salary;

    if (salary >= 20000 && salary < 30000)
        tax = salary * 0.10;
    else if (salary >= 30000 && salary < 50000)
        tax = salary * 0.20;
    else if (salary >= 50000)
        tax = salary * 0.30;

    cout << "Your tax amount is " << tax << endl;

    return 0;
}

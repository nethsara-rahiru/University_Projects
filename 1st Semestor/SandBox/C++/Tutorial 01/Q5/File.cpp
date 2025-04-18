#include <iostream>
using namespace std;

int main() {
    double baseSalary, totalSales, salary, bonus, commission;
    int years;

    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter the total sales: ";
    cin >> totalSales;

    if (years <= 5)
    {
        bonus =  years * 1000;
    }
    else
    {
        bonus =  years * 2000;
    }

    if (totalSales >= 5000 && totalSales < 10000)
    {
        commission =  totalSales * 0.03;
    }
    else if (totalSales >= 10000)
    {
        commission =  totalSales * 0.06;
    }
    else
    {
        commission =  0;
    }
    salary = baseSalary + bonus + commission;

    cout << "Salary: " << salary << endl;

    return 0;
}

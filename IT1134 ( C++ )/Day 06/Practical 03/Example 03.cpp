#include<iostream>
using namespace std;


int main()
{
    string name;
    int age;
    string course;
    string address;
    string regNo;

    cout<<"Please enter your name                : ";
    getline(cin,name);
    cout<<"Please enter your Age                 : ";
    cin>>age;
    cin.ignore();
    cout<<"Please enter your Course              : ";
    getline(cin,course);
    cout<<"Please enter your Address             : ";
    getline(cin,address);
    cout<<"Please enter your Registration Number : ";
    getline(cin,regNo);

    cout<<endl;

    cout<<regNo<<" - "<<name<<endl;
    cout<<" |   Course     - "<<course<<endl;
    cout<<" |   Age        - "<<age<<endl;
    cout<<" |   Address    - "<<address<<endl;

}

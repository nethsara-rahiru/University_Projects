
#include<iostream>

int main()
{
    std::string ct;
    std::string con;

    std::cout<<"Hi There"<<std::endl<<"In which City do you live?"<<std::endl;
    std::cin>>ct;
    std::cout<<"What is your country?"<<std::endl;
    std::cin>>con;
    std::cout<<"You live in "<<ct<<", "<<con<<std::endl;
    return 0;
}

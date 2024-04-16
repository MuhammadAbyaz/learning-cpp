#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int year;
    std::cout<< "Enter a year: "<< std::endl;
    std::cin>>year;
    std::cout << (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) ? "Its a leap year" : "No its not a leap year") << std::endl;
    return 0;
}
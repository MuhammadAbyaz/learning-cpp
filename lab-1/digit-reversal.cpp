#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int number;
    std::cout << "Enter any two digit number: " << std::endl;
    std::cin >> number;
    std::cout << "Reversed number is: " << (number >= 10 ? ((number%10) * 10 + (number / 10)): number ) << std::endl;
}
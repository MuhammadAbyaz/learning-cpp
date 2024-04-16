#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int number = 0;
    std::cout << "Enter a number: "<<std::endl;
    std::cin >> number;
    if (number % 2 == 0) std::cout << "Its Even" << std::endl; 
    else std::cout << "Its Odd";
    return 0;
}
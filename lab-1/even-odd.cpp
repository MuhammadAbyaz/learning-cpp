#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int number = 0;
    std::cout << "Enter a number: "<<std::endl;
    std::cin >> number;
    std::cout << ((number% 2 == 0) ? "Its Even": "Its Odd") << std::endl;
    return 0;
}
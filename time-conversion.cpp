#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    long int seconds;
    std::cout<< "Enter time in seconds: "<< std::endl;
    std::cin >> seconds;
    
    std::cout << "Hours in time is: " << seconds / 3600 << std::endl;
    seconds%=3600;
    std::cout << "Minutes in time is: "<< seconds / 60<< std::endl;
    seconds%=60;
    std::cout << "Seconds in time is: "<< seconds % 60 << std::endl;
}
#include<iostream>

int main(){
    float fahrenheit;
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    std::cout << "Enter temperature in fahrenheit: " << std::endl;
    std::cin >> fahrenheit;
    std::cout << "Temperature in Celcius is " << (fahrenheit - 32 ) * 5/ 9 << "°C";
    return 0;
}
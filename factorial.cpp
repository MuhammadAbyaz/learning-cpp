#include <iostream>
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int number;
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    std::cout << "Enter a number: " <<std::endl;
    std::cin >> number;
    std:: cout << "Factorial of  " << number << " is " << factorial(number) <<std::endl;
    return 0;
}
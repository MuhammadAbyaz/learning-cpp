#include <iostream>
int factorial(int n){
    if (n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int number;
    std::cout << "Enter the number: ";
    std::cin>>number;
    std::cout<< "Factorial of " << number << ": "<< factorial(number);
    return 0;
}
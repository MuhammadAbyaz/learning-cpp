#include <iostream>
#include <cmath>
bool isPrime(int n){
    int i;
    bool isPrime = true;
    if(n == 0 || n == 1){
        return false;
    }
    for (i = 2; i<=n/2; i++){
        if (n% i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    if(isPrime(number)) std::cout << number << " is a prime number";
    else std::cout<<number << " is not a prime number";
    return 0;
}
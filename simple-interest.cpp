#include <iostream>

float calcSimpleInterest(float principalAmount, float interestRate, float timePeriod){
    return (principalAmount * interestRate * timePeriod) / 100;

}
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    float p, r, t;
    std::cout << "Enter principal amount: " << std::endl;
    std::cin>> p;
    std::cout << "Enter interest rate: " << std::endl;
    std::cin >> r;
    std::cout << "Enter time period: " << std::endl;
    std::cin >> t;
    std::cout << "Simple interest: " << calcSimpleInterest(p,r,t) << std::endl;
    return 0;
}
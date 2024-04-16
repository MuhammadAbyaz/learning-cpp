#include<iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int amount;
    std::cout << "Enter amount in rupees: " << std::endl;
    std::cin >> amount;
    std::cout << "1000's in given amount: " << amount / 1000 <<std::endl;
    amount%=1000;
    std::cout << "100's in given amount: " << amount / 100 <<std::endl;
    amount%=100;
    std::cout << "50's in given amount: " << amount / 50 <<std::endl;
    amount%=50;
    std::cout << "10's in given amount: " << amount / 10 <<std::endl;
    amount%=10;
    std::cout << "5's in given amount: " << amount /5 << std::endl;
    amount%=5;
    std::cout << "2's in given amount: " << amount / 2 <<std::endl;
    amount%=2;
    std::cout << "1's in given amount: " << amount / 1 <<std::endl;
    return 0;
}
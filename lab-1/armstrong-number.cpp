#include <iostream>
#include <math.h>
bool isArmstrong(int n){
    int result = 0;
    int temp = n;
    while (temp > 0)
    {
        result += int(pow(temp%10, float(std::to_string(n).size())));
        temp/=10;
    }
    return result==n ? true : false;
}
int main (){
    int number;
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    std::cout << "Enter a number: " << std::endl;
    std::cin>> number;
    std::cout << ((isArmstrong(number) )? "Its an armstrong number" : "Its not an armstrong number");
    return 0;
}
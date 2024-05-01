#include <iostream>
struct Number
{
    int num;
};

void swapValues(Number& n1, Number& n2){
    int temp = n1.num;
    n1.num = n2.num;
    n2.num = temp;
}
int main(){ 
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    Number num1, num2;
    std::cout<<"Enter first number: ";
    std::cin>>num1.num;
    std::cout<<"Enter second number: ";
    std::cin>>num2.num;
    swapValues(num1,num2);
    std::cout<<"First Number: "<<num1.num<<std::endl;
    std::cout<<"Second Number: "<<num2.num<<std::endl;
    return 0;
}
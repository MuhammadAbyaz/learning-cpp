#include <iostream>

int main(){
    int number;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter a number: ";
    std::cin>>number;
    for (int i = 1; i<=10;i++){
        std::cout<<number << " * " << i << " = " << number * i<<std::endl;
    }
    return 0;
}
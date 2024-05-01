#include <iostream>
int main(){
    int firstNumber, secondNumber,option;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    do{
        std::cout<<"1: Addition"<<std::endl;
        std::cout<<"2: Subtraction"<<std::endl;
        std::cout<<"3: Multiplication"<<std::endl;
        std::cout<<"4: Division"<<std::endl;
        std::cout<<"5: Exit"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"Select an option: ";
        std::cin>>option;
        switch (option)
        {
        case 1:
            std::cout<<"Enter first number: ";
            std::cin>>firstNumber;
            std::cout<<"Enter second number: ";
            std::cin>>secondNumber;
            std::cout<<"Sum: "<<firstNumber+secondNumber<<std::endl;
            break;
        case 2:
            std::cout<<"Enter first number: ";
            std::cin>>firstNumber;
            std::cout<<"Enter second number: ";
            std::cin>>secondNumber;
            std::cout<<"Subtracted Value: "<<firstNumber-secondNumber<<std::endl;
            break;
        case 3:
            std::cout<<"Enter first number: ";
            std::cin>>firstNumber;
            std::cout<<"Enter second number: ";
            std::cin>>secondNumber;
            std::cout<<"Result: "<<firstNumber*secondNumber<<std::endl;
            break;
        case 4:
            std::cout<<"Enter dividend: ";
            std::cin>>firstNumber;
            std::cout<<"Enter divisor: ";
            std::cin>>secondNumber;
            std::cout<<"Quotient: "<<firstNumber/secondNumber<<std::endl;
            break;
        case 5:
            std::cout<<"Exiting...";
            break;
        default:
            std::cout<<"Select valid option!!";
            break;
        }
    } while(option != 5);
    return 0;
}
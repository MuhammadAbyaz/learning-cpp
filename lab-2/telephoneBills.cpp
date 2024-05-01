#include <iostream>
int main(){
    int minAmount = 200;
    int numberOfCalls,bill;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter number of calls: ";
    std::cin>>numberOfCalls;
    if(numberOfCalls <= 100) bill = 200;
    else if (numberOfCalls > 100 && numberOfCalls <=150) bill= 200+ ((numberOfCalls-100)*0.6);
    else if (numberOfCalls > 150 && numberOfCalls <=200) bill= 200+ ((0.6 * 50)+(numberOfCalls-150)*0.5);
    else bill = 200 + (0.6*50) + (0.5 * 50) + ((numberOfCalls-200)*0.4);
    std::cout<<"Total bill: " << bill;
    return 0;
}
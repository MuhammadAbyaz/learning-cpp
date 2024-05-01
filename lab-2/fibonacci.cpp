#include <iostream>
int main(){
    int firstNum = 0, secondNum = 1, sum=0, numberOfTerms;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter nummber of terms: ";
    std::cin>>numberOfTerms;
    std::cout<<firstNum<<", "<<secondNum;
    for (int i = 2; i < numberOfTerms; i++)
    {
        sum = firstNum+secondNum;
        std::cout<<sum<<((i == numberOfTerms-1)?"":", ");
        firstNum = secondNum;
        secondNum = sum;
    } 
    return 0;
}
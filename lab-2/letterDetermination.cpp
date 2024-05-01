#include <iostream>
int main(){
    char c;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter any character: ";
    std::cin>>c;
    if (int(c)>= 65 && int(c)<=90) std::cout<<"Capital Letter";
    else if (int(c)>= 97 && int(c)<=122) std::cout<<"Small Letter";
    else if (int(c)>= 48 && int(c)<=57) std::cout<<"Digit";
    else std::cout<<"Special Character";
    return 0;
}
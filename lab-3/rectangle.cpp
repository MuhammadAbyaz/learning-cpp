#include <iostream>
struct Rectangle
{
    float length;
    float width;
};
int main(){
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    Rectangle r1;
    std::cout<<"Enter length: ";
    std::cin>>r1.length;
    std::cout<<"Enter width: ";
    std::cin>>r1.width;
    std::cout<<"Area of rectangle: "<<r1.length * r1.width << " m^2" <<std::endl;
    return 0;
}
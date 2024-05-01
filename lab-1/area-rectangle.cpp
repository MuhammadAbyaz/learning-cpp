#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    float length,breadth;
    std::cout << "Enter length of the rectangle in meters: " << std::endl;
    std::cin>> length;
    std::cout << "Enter breadth of the rectangle in meters: " << std::endl;
    std::cin>> breadth;
    
    std::cout << "Area of rectangle: " << length * breadth << " m^2";
    return 0;
}

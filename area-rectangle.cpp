#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int length,breadth = 0;
    std::cout << "Enter length of the rectangle in meters: " << std::endl;
    std::cin>> length;
    std::cout << "Enter breadth of the rectangle in meters: " << std::endl;
    std::cin>> breadth;
    int area = length * breadth;
    std::cout << "Area of rectangle: " << area << " m^2";
    return 0;
}

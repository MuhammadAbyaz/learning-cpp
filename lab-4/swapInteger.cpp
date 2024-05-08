#include <iostream>
void swapInteger(int *firstInt, int *secondInt)
{
    int temp = *firstInt;
    *firstInt = *secondInt;
    *secondInt = temp;
}
int main()
{
    int firstNumber, secondNumber;
    std::cout << "Name: "
              << "Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: "
              << "SE-23053" << std::endl;
    std::cout << "First Number: ";
    std::cin >> firstNumber;
    std::cout << "Second Number: ";
    std::cin >> secondNumber;
    swapInteger(&firstNumber, &secondNumber);
    std::cout
        << "First Number: " << firstNumber << std::endl;
    std::cout << "Second Number: " << secondNumber << std::endl;
    return 0;
}
#include <iostream>
#include <array>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    std::array<int,3> arr;
    int input;
    std::cout<< "First number: "<<std::endl;
    std::cin >> input;
    arr[0] = input;
    std::cout<< "Second number: "<<std::endl;
    std::cin>>input;
    arr[1]= input;
    std::cout<< "Third number: "<<std::endl;
    std::cin>>input;
    arr[2]= input;
    int max = arr[0];
    for (int i = 1; i < 3; i++){
        if (arr[i] > max) max = arr[i];
    }
    std::cout << "Maximum number: " << max;
    return 0;
}
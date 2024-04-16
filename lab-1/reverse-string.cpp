#include <iostream>
#include <string>

int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    std::string str;
    std::cout<<"Enter the string: ";
    std::cin >> str;
    int l = 0;
    int r = str.size()-1;
    while (l <r)
    {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    
    std::cout<<str;
    return 0;
}
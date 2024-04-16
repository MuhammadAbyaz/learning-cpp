#include <iostream>
int main(){
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: SE-23053" << std::endl;
    int n;
    std::cout<<"Enter the number of terms: " <<std::endl;
    std::cin >> n;
    if (n <= 1) std::cout<<1<<std::endl;
    else {
        int n1 = 0;
        int n2 = 1;
        int sum;
        std::cout<<"Fibonacci Series: ";
        std::cout<<n1 << " ";
        std::cout<<n2 << " ";
        while (n-2 > 0)
        {
            sum = n1+n2;
            std::cout << sum << " ";
            n1 = n2;
            n2 = sum;
            n--;
        }
    }
    return 0;
}
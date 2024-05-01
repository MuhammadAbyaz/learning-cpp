#include <iostream>
struct Product
{
    std::string productName;
    double price;
    int quantity;
};

int main(){
    Product product;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter product name: ";
    std::cin >> product.productName;
    std::cout<<"Enter product price: ";
    std::cin >> product.price;
    std::cout<<"Enter product quantity: ";
    std::cin >> product.quantity;
    std::cout<<"Total price: " << product.price * product.quantity;
    return 0;
}
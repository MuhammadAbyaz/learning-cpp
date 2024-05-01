#include <iostream>
#include <string>
std::string encrypt(std::string message, int shift) {
    std::string encrypted;
    for (char i: message) {
        encrypted += char(int(i) + shift);
    }
    return encrypted;
}

std::string decrypt(std::string message, int shift) {
    return encrypt(message, -shift);
}

int main() {
    std::string message;
    int shift;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout << "Enter a message to encrypt: ";
    std::getline (std::cin,message);
    std::cout << "Enter the shift value for encryption: ";
    std::cin >> shift;
    std::string encryptedMessage = encrypt(message, shift);
    std::cout << "Encrypted message: " << encryptedMessage << std::endl;
    std::string decrypted_message = decrypt(encryptedMessage, shift);
    std::cout << "Decrypted message: " << decrypted_message << std::endl;
    return 0;
}
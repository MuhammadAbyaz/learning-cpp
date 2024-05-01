#include <iostream>

bool isSpecial(char c){
    return !(std::isupper(c) || std::islower(c) || std::isdigit(c));
}
void passwordCheck(std::string password){
    bool hasUpper, hasLower,hasDigit,hasSpecial = false;
    for (int i = 0; i < password.length(); i++)
    {
        if(std::isupper(password[i])) hasUpper = true;
        else if(std::islower(password[i])) hasLower = true;
        else if(std::isdigit(password[i])) hasDigit = true;
        else if(isSpecial(password[i])) hasSpecial = true;
    }
    std::cout << ((hasUpper && hasDigit && hasLower && hasSpecial) ? "Strong" 
    : "Weak password it must contain at least 8 characters, one uppercase letter, one lowercase letter, one digit, and one special character and no space character.");
}
int main(){
    std::string password;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter your password: ";
    std::cin>>password;
    if (password.length() < 8) std::cout<<"Weak Password";
    else passwordCheck(password);
    return 0;
}
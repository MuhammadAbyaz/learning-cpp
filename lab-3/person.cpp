#include <iostream>
struct Person
{
    std::string name;
    int age;
};

int main(){
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    Person person1 = {"Abyaz",19};
    std::cout<<person1.name<<std::endl;
    std::cout<<person1.age<<std::endl;
    return 0;
}
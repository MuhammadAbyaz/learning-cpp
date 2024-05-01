#include <iostream>
struct Student
{
    std::string name;
    int rollNo;
    int age;
    int marks;
};

int main(){
    Student studentArray [3];
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    for (int i = 0; i < 3; i++){
        std::cout<<i+1<<" Student" <<std::endl;
        std::cout<<"Enter name: ";
        std::cin>>studentArray[i].name;
        std::cout<<"Enter age: ";
        std::cin>>studentArray[i].age;
        std::cout<<"Enter roll number: ";
        std::cin>>studentArray[i].rollNo;
        std::cout<<"Enter marks: ";
        std::cin>>studentArray[i].marks;
    }
    int highestMarks = 0;
    for (int i = 0; i < std::size(studentArray); i++){
        std::cout<<studentArray[i].name<<std::endl;
        std::cout<<"Name: "<<studentArray[i].name<<std::endl;
        std::cout<<"Age: "<<studentArray[i].age<<std::endl;
        std::cout<<"Roll number: "<<studentArray[i].rollNo<<std::endl;
        std::cout<<"Marks: "<<studentArray[i].marks<<std::endl;
        if (highestMarks < studentArray[i].marks) highestMarks = studentArray[i].marks;
    }
    std::cout<<"Highest Marks: "<<highestMarks;
    return 0;
}
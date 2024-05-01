#include <iostream>
struct Employee
{
    int employeeId;
    std::string name;
    std::string department;
    int salary;
};

int main(){
    Employee employeeArray[5];
    float averageSalary;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    for (int i = 0; i <std::size(employeeArray); i++){
        std::cout<<i+1<<" Employee"<<std::endl;
        std::cout<<"Enter employee id: ";
        std::cin>>employeeArray[i].employeeId;
        std::cout<<"Enter name : ";
        std::cin>>employeeArray[i].name;
        std::cout<<"Enter department : ";
        std::cin>>employeeArray[i].department;
        std::cout<<"Enter salary: ";
        std::cin>>employeeArray[i].salary;
    }
    for (int i = 0; i < std::size(employeeArray); i++)
    {
        std::cout<<"Employee Id: " <<employeeArray[i].name<<std::endl;
        std::cout<<"Name: " <<employeeArray[i].name<<std::endl;
        std::cout<<"Department: " <<employeeArray[i].name<<std::endl;
        std::cout<<"Salary: " <<employeeArray[i].name<<std::endl;
        averageSalary+= employeeArray[i].salary;
    }
    averageSalary/=std::size(employeeArray);
    std::cout<<"Average Salary: "<< averageSalary;
    return 0;
}
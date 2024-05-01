#include <iostream>
int main(){
    int day;
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    std::cout<<"Enter day: ";
    std::cin>>day;
    switch (day)
    {
    case 1:
        std::cout<<"Monday";
        break;
    case 2:
        std::cout<<"Tuesday";
        break;
    case 3:
        std::cout<<"Wednesday";
        break;
    case 4:
        std::cout<<"Thursday";
        break;
    case 5:
        std::cout<<"Friday";
        break;
    case 6:
        std::cout<<"Saturday";
        break;
    case 7:
        std::cout<<"Sunday";
        break;
    default:
        std::cout<<"Does not exists :)";
        break;
    }
}
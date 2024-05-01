#include <iostream>
#include <string>
struct Book
{ 
    int yearOfPublication;
    std::string title;
    std::string author;
    std::string genre;
    
};

int main(){
    Book bookArray[3];
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    for (int i = 0; i < std::size(bookArray); i++)
    {
        std::cout<<i+1<<" Book"<<std::endl;
        std::cout<<"Enter title: ";
        std::cin>>bookArray[i].title;
        std::cout<<"Enter author: ";
        std::cin>>bookArray[i].author;
        std::cout<<"Enter genre: ";
        std::cin>>bookArray[i].genre ;
        std::cout<<"Enter year of publication: ";
        std::cin>>bookArray[i].yearOfPublication;

    }
    Book earliestPublished = bookArray[0];
    for (int i = 0; i < std::size(bookArray); i++)
    {
        std::cout<<"Title: "<<bookArray[i].title <<std::endl;
        std::cout<<"Author: "<<bookArray[i].author <<std::endl;
        std::cout<<"Genre: "<<bookArray[i].genre <<std::endl;
        std::cout<<"Year of Publication: "<<bookArray[i].yearOfPublication <<std::endl;
        if(std::min(earliestPublished.yearOfPublication,bookArray[i].yearOfPublication) < earliestPublished.yearOfPublication) earliestPublished = bookArray[i];
    }
    std::cout<<"Earliest Published Book: "<<earliestPublished.title;
    return 0;
}
#include <iostream>
void pattern1()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i < 5)
            {
                if (j >= 4 - i && j <= 4 + i)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            else
            {
                if (j >= i - 4 && j <= 12 - i)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
void pattern2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << ((j == 0 || j == 4) ? "*" : " ");
            }
        }
        std::cout << std::endl;
    }
}
void pattern3()
{
    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j >= 4 - i && j <= i + 4)
            {
                if (j>=4) {
                    std::cout<<k;
                    k++;
                }
                else{
                    std::cout<<k;
                    k--;
                }
            }
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void pattern4(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j<=i) std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<std::endl; 
    }
}
void pattern5(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i<=5){
                if (j<=i || j>=9-i) std::cout<<"*";
                else std::cout<<" ";
            }
            else{
                if (j<=9-i || j>=i)std::cout<<"*";
                else std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
}
int main()
{
    std::cout<<"Name: Muhammad Abyaz Khalid"<<std::endl;
    std::cout<<"RollNo: SE-23053"<<std::endl;
    pattern5();
    return 0;
}
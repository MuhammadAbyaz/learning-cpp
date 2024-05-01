#include <iostream>
#include <ctime>
int main()
{
    srand(time(nullptr));
    int randomNumber = rand() % 100 + 1;
    int attempts = 0, guess;
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "RollNo: SE-23053" << std::endl;
    do
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if (guess > randomNumber)
            std::cout << "Try again!! Too high guess!\n";
        else if (guess < randomNumber)
            std::cout << "Try again!! Too low guess!\n";
        else
            std::cout << "You have guessed the number " << randomNumber << " in " << attempts << " tries";
    } while (guess != randomNumber);
}
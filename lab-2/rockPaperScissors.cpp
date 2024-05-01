#include <iostream>
#include <ctime>

void playGame(int *score)
{
    std::cout << "Enter your choice: ";
    std::string userChoice;
    std::cin >> userChoice;

    std::string choices[3] = {"rock", "paper", "scissors"};
    std::string computerChoice = choices[rand() % 3];
    std::cout << "Computer chooses: " << computerChoice << std::endl;

    if (userChoice == computerChoice)
    {
        std::cout << "It's a tie!\n";
    }
    else if ((userChoice == "rock" && computerChoice == "scissors") ||
             (userChoice == "paper" && computerChoice == "rock") ||
             (userChoice == "scissors" && computerChoice == "paper"))
    {
        std::cout << "Congratulations! You win!\n";
        *score = *score + 1;
    }
    else
    {
        std::cout << "Sorry, you lose. Better luck next time!\n";
    }
}

int main()
{
    srand(time(0));
    int option;
    int score = 0;
    std::cout << "Name: Muhammad Abyaz Khalid" << std::endl;
    std::cout << "RollNo: SE-23053" << std::endl;
    do
    {
        std::cout << "Welcome to Rock Paper And Scissors Game!" << std::endl;
        std::cout << "1: Play" << std::endl;
        std::cout << "2: Exit" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Select an option: " << std::endl;
        std::cin >> option;
        switch (option)
        {
        case 1:
            playGame(&score);
            break;
        case 2:
            std::cout << "Total Score: " << score << std::endl;
            std::cout << "Exiting...";
            break;
        default:
            std::cout << "Select Valid Option!!";
            break;
        }
    } while (option != 2);
    return 0;
}
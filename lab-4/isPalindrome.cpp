#include <iostream>
#include <string>
bool isPalindrome(std::string *word)
{
    char l = 0;
    char r = word->size() - 1;
    while (l <= r)
    {
        if (word->at(l) != word->at(r))
            return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    std::string input;
    std::cout << "Name: "
              << "Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: "
              << "SE-23053" << std::endl;
    std::cout
        << "Enter any string: ";
    std::cin >> input;
    std::cout << (isPalindrome(&input) ? "The word is a palindrome." : "The word is not a palindrome.");
    return 0;
}
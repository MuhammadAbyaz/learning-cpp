#include <iostream>
#include <unordered_set>
std::unordered_set<int> removesDuplicates(int *arr, int size)
{
    std::unordered_set<int> uniqueElements;
    int *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        uniqueElements.insert(*ptr);
        ptr++;
    }
    return uniqueElements;
}
int main()
{
    std::cout << "Name: "
              << "Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: "
              << "SE-23053" << std::endl;
    int arr[10] = {1, 1, 12, 45, 12, 45, 11, 22, 31, 98};
    std::unordered_set<int> uniqueElements = removesDuplicates(arr, std::size(arr));
    for (auto i = uniqueElements.begin(); i != uniqueElements.end(); ++i)
    {
        std::cout << *i << " ";
    }
    return 0;
}

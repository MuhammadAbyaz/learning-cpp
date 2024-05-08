#include <iostream>
int findMax(int *arr, int size)
{
    int maxValue = *arr;
    for (int i = 0; i < size; i++)
    {
        maxValue = std::max(maxValue, arr[i]);
    }
    return maxValue;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "Name: "
              << "Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: "
              << "SE-23053" << std::endl;
    std::cout << "Max Value: " << findMax(arr, std::size(arr));
    return 0;
}
#include <iostream>
void reverseArray(int *arr, int size)
{
    int *l = arr;
    int *r = arr + size - 1;
    while (l < r)
    {
        int temp = *l;
        *l = *r;
        *r = temp;
        l++;
        r--;
    }
}
int main()
{
    int arr[5] = {
        1,
        2,
        3,
        4,
        5};
    std::cout << "Name: "
              << "Muhammad Abyaz Khalid" << std::endl;
    std::cout << "Roll Number: "
              << "SE-23053" << std::endl;
    reverseArray(arr, std::size(arr));
    for (int i = 0; i < std::size(arr); i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
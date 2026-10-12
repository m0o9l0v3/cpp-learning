#include <iostream>

int findIndex(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = {4,7,2,9,5};

    std::cout << findIndex(numbers, 5, 9) << '\n';
    std::cout << findIndex(numbers, 5, 6) << '\n';
}
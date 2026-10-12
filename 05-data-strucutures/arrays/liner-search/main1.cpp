#include <iostream>

int countMatches(int arr[], int size, int target)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int number[] = {3, 5, 3, 7, 3};

    std::cout << countMatches(number, 5, 3) << '\n';

}
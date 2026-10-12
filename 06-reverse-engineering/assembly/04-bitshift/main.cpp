#include <iostream>

int main()
{
    unsigned int x = 0;

    std::cout << "整数を入力してください: ";

    if(!(std::cin >> x))
    {
        std::cerr << "Input error\n";
        return 0;
    }

    unsigned int result = x << 3;

    std::cout << result << '\n';

    return 0;

}
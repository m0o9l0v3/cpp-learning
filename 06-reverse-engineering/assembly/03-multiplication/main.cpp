#include <iostream>

int multiply(int x)
{
    return x * 7;
}

int main()
{
    int a = 0;

    std::cout << "1つの値を入力してください: ";

    std::cin >> a;

    int result = multiply(a);

    std::cout << result << '\n';

    return 0;
}
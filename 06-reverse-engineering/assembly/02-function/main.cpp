#include <iostream>

int add(int x, int y)
{
    return x + y * 3;


}

int main()
{

    int a = 0;
    int b = 0;

    std::cout << "２つの値を入力します: ";

    if (!(std::cin >> a >> b))
    {
        std::cerr << "Input error\n";
        return 1;
    }

    int result = add(a, b);

    std::cout << result << '\n'; 

    return 0;

}
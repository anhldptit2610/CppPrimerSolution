#include <iostream>

int main()
{
    int sum, value;

    for (sum = 0; std::cin >> value;)
        sum += value;
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
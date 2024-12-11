#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, item;

    while (std::cin >> item)
        sum += item;
    std::cout << "Sum of all transaction: " << sum << std::endl;
    return 0;
}
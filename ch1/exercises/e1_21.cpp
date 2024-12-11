#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;

    std::cin >> item1 >> item2;
    std::cout << "Sum of two Sales_item objects: " << item1 + item2 << std::endl;
    return 0;
}
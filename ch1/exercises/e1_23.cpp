#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, prevItem;
    int cnt = 1;

    // read the first item to prevItem, mark the cnt as 1
    std::cin >> prevItem;
    while (std::cin >> item) {
        if (item.isbn() == prevItem.isbn())
            cnt++;
        else {
            std::cout << "ISBN " << prevItem.isbn() << " has " << cnt << " transaction" << std::endl;
            cnt = 1;
            prevItem = item;
        }
    }
    // show the last counting
    std::cout << "ISBN " << prevItem.isbn() << " has " << cnt << " transaction" << std::endl;
    return 0;
}
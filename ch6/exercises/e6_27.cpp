/*
    Exercise 6.27: Write a function that takes an initializer_list<int>
    and produces the sum of the elements in the list.
*/

/* solution */

#include <iostream>

void InitializerListTest(std::initializer_list<int> il)
{
    int result = 0;

    for (auto it : il)
        result += it;
    std::cout << "result: " << result << std::endl;
}
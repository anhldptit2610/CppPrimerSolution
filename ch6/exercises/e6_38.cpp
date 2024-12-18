/*
    Exercise 6.38: Revise the arrPtr function on to return a reference to the
    array.
*/

/* solution */

#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype((odd)) arrPtr(int i)
{
    return (i % 2) ? (odd) : (even);
}

int main()
{
    int (&a)[5] = arrPtr(1);

    std::cout << "before: ";
    for (auto i : a)
        std::cout << i << ' ';
    std::cout << std::endl;
    a[1] = 4;
    std::cout << "after: ";
    for (auto i : a)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}
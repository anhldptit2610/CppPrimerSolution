/*
    Exercise 6.32: Indicate whether the following function is legal. If so, explain
    what it does; if not, correct any errors and then explain it.
*/

/* solution */

#include <iostream>

int &get(int *arry, int index) { return arry[index]; }

int main() {
    int ia[10];

    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
    for (auto i : ia)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}

/* 
    The function 'get' is planning to set the elements of arry array
    to values from 0 to 10. It seems like there's nothing illegal
*/
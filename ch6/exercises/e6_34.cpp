/*
    Exercise 6.34: What would happen if the stopping condition in factorial
    were
    if (val != 0)
*/

/* solution */

#include <iostream>

int factorial(int val)
{
    if (val > 1)
        return factorial(val-1) * val;
    return 1;
}

/* when change to val != 0, it seems like there's still the same. */

int main()
{
    std::cout << factorial(5) << std::endl;
    return 0;
}
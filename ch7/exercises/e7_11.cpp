/*
    Exercise 7.11: Add constructors to your Sales_data class and write a
    program to use each of the constructors.
*/

/* solution */

#include "../example/Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data Helicopter("11002200");
    Sales_data Jax("00123412", 1000, 200000);

    return 0;
}

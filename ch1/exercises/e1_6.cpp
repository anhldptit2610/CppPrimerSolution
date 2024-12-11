/*

The statement
    std::cout << "The sum of " << v1;
                << " and " << v2;
                << " is " << v1 + v2 << std::endl;
    is illegal. Because after the first line, there's no
    std::cout so the compiler doesn't know which is the left 
    operator of <<. So it will be an error.

    Solution: provide missing std::cout for the last 2 statement.
*/

#include <iostream>

int main()
{
    int v1, v2;

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}
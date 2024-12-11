/* The loop

    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    
    add sum to values from -100 to 100. The final
    value of sum would be 0
*/

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "sum = " << sum << std::endl;
    return 0;
}
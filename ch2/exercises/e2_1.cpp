/*
    The different between int, long, long long and short is the sign.
    Often, int is 4 bytes, long is 8, long long is 16 and short is just
    2 bytes. They are all signed btw.

    The different between signed and unsigned type is unsigned type can't
    store negative number, while signed can. But the maximum positive value
    of signed type is smaller than unsigned one.

    The different between float and double is: float is single precision, while
    double is double precision. So the size of float is 4 bytes, the size of double
    is 8 bytes. 
*/

#include <iostream>

int main()
{
    std::cout << "Size of long is: " << sizeof(long) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    return 0;
}
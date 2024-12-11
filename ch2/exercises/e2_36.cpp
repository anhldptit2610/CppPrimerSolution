#include <iostream>

int main()
{
    int a = 3, b = 4;       // both are int
    decltype(a) c = a;      // c is a int
    decltype((b)) d = a;    // d is a reference to int
    ++c;                    // c = 4
    ++d;                    // a = 4
    std::cout << a << b << c << d << std::endl;
    // a = 4, b = 4, c = 4, d = 4
    return 0;
}
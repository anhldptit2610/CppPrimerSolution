#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;                 // j is a int
    j = 4;
    const auto& k = i;          // k is a const reference
    auto *p = &i;               // p is a pointer to const int
    const auto j2 = i;          // j2 is a const int
    const auto& k2 = i;         // k2 is a const reference to int

    return 0;
}
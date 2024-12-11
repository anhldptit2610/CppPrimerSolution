#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto& g = ci;

    a = 42;         // variable a type int, value 42
    b = 42;         // variable b type int, value 42
    c = 42;         // variable c type int, value 42
    d = 42;         // error, d is a pointer to an int so can't do this
    e = 42;         // same as above
    g = 42;         // g is const int&, so can't modify the value of ci
    return 0;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const int ci = 42;
    int i = ci;
    int * const p = &i;
    *p = 0;
}
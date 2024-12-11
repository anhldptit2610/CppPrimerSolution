#include <iostream>

int fact(int n)
{
    int res = 1;

    while (n >= 1) {
        res *= n;
        n--;
    }
    return res;
}
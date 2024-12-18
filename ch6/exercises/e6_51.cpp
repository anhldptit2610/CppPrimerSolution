/*
    Exercise 6.51: Write all four versions of f. Each function should print a
    distinguishing message. Check your answers for the previous exercise. If your
    answers were incorrect, study this section until you understand why your
    answers were wrong.
*/

/* solution */

#include <iostream>

using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int x)
{
    cout << "f(int)" << endl;
}

void f(int x, int y)
{
    cout << "f(int, int)" << endl;
}

void f(double x, double y = 3.14)
{
    cout << "f(double, double = 3.14)" << endl;
}

int main()
{
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
/*
    Exercise 6.55: Write four functions that add, subtract, multiply, and divide
    two int values. Store pointers to these values in your vector from the
    previous exercise.
*/

/* solution */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int Add(int x, int y) { return x + y; }
int Sub(int x, int y) { return x - y; }
int Mul(int x, int y) { return x * y; }
int Div(int x, int y) { return x / y; }

std::vector<int (*)(int, int)> funcVector;

int main()
{
    funcVector.push_back(Add);
    funcVector.push_back(Sub);
    funcVector.push_back(Mul);
    funcVector.push_back(Div);

    cout << funcVector[0](1, 1) << endl;
    cout << funcVector[1](1, 1) << endl;
    cout << funcVector[2](2, 3) << endl;
    cout << funcVector[3](10, 2) << endl;

    return 0;
}
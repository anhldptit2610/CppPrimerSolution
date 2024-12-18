/*
    Exercise 6.54: Write a declaration for a function that takes two int
    parameters and returns an int, and declare a vector whose elements have
    this function pointer type.
*/

/* solution */

#include <iostream>
#include <vector>

int Func(int, int);

using FuncType = int (*)(int, int);

std::vector<FuncType> funcVector;

// or

std::vector<int (*)(int, int)> anotherFuncVector;
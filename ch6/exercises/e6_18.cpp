/*
    Exercise 6.18: Write declarations for each of the following functions. When
    you write these declarations, use the name of the function to indicate what
    the function does.
    (a) A function named compare that returns a bool and has two parameters
    that are references to a class named matrix.
    (b) A function named change_val that returns a vector<int> iterator
    and takes two parameters: One is an int and the other is an iterator for a
    vector<int>.
*/

/* solution */

#include <iostream>
#include <vector>

using std::vector;

class matrix {

};

bool compare(matrix& , matrix&);
vector<int>::iterator change_val(int, vector<int>::iterator);

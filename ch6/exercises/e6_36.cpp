/*
    Exercise 6.36: Write the declaration for a function that returns a reference
    to an array of ten strings, without using either a trailing return,
    decltype, or a type alias.
*/

/* solution */

#include <string>

std::string (&func())[10];
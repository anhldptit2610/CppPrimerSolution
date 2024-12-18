/*
    Exercise 6.25: Write a main function that takes two arguments.
    Concatenate the supplied arguments and print the resulting string.
*/

/* solution */

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3) {
        cout << "This program takes 2 arguments" << endl;
        exit(EXIT_FAILURE);
    }
    cout << argv[1] << argv[2] << endl;
    return 0;
}
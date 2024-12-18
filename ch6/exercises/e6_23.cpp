/*
    Exercise 6.23: Write your own versions of each of the print functions
    presented in this section. Call each of these functions to print i and j
    defined as follows:
    int i = 0, j[2] = {0, 1};
*/

/* solution */

#include <iostream>

using std::cout;
using std::endl;

void print(const int *beg, const int *end)
{
    for (const int *i = beg; i != end; i++)
        cout << *i << ' ';
    cout << endl;
}

void print(const int arr[], size_t size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}
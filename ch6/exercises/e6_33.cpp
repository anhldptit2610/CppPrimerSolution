/*
    Exercise 6.33: Write a recursive function to print the contents of a vector.
*/

/* solution */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void PrintVector(std::vector<int>::iterator i, const std::vector<int>::iterator end)
{
    if (i == end) {
        cout << endl;
        return;
    } else {
        cout << *i << ' ';
        PrintVector(++i, end);
    }
}

int main()
{
    std::vector<int> vt{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    PrintVector(vt.begin(), vt.end());
    return 0;
}
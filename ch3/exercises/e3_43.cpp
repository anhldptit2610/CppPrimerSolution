#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
};

int main()
{
    // version 1: use a range for to manage the iteration
    for (auto& i : ia) {
        for (auto j : i) {
            cout << j << ' '; 
        }
        cout << endl;
    }
    // version 2: use ordinary for loop with subscripts
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }
    // version 3: use ordinary for loop with pointers
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(ia + i * 4 + j) << ' ';
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int x = 3, y = 4;

    cout << "x and y before: " << x << ' ' << y << endl;
    swap(x, y);
    cout << "x and y after: " << x << ' ' << y << endl;
    return 0;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int E6_7()
{
    static int x = 0;

    x++;
    return x - 1;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << "val: " << E6_7() << endl;
    return 0;
}
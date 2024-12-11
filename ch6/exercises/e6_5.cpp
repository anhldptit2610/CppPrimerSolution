#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned GetAbsolute(int n)
{
    return (n < 0) ? -1 * n : n;
}

int main()
{
    int n;
    cin >> n;
    cout << "Absolute number of " << n << " is: " << GetAbsolute(n) << endl;
    return 0;
}
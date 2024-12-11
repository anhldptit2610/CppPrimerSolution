#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void GetFactorial()
{
    int n, res = 1;

    cout << "Please give me a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is: ";
    while (n >= 1) {
        res *= n;
        n--;
    }
    cout << res << endl;
}

int main()
{
    GetFactorial();
    return 0;
}
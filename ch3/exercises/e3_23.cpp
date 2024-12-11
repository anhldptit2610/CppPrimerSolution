#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::vector<int> vt(10, 42);

    cout << "Vector content before: " << endl;
    for (auto i : vt)
        cout << i << ' ';
    cout << endl;
    for (auto& i : vt)
        i = i * 2;
    cout << "Vector content after: " << endl;
    for (auto i : vt)
        cout << i << ' ';
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<std::string> v6{10};
    vector<std::string> v7{10, "hi"};

    // print the size and contents of the vectors using iterator
    cout << "v1 - size: " << v1.size() << " - contents: ";
    for (auto i : v1)
        cout << i << " ";
    cout << endl;
    cout << "v2 - size: " << v2.size() << " - contents: ";
    for (auto i : v2)
        cout << i << " ";
    cout << endl;
    cout << "v3 - size: " << v3.size() << " - contents: ";
    for (auto i : v3)
        cout << i << " ";
    cout << endl;
    cout << "v4 - size: " << v4.size() << " - contents: ";
    for (auto i : v4)
        cout << i << " ";
    cout << endl;
    return 0;
}
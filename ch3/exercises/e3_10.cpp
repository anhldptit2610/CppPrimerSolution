#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s;

    std::getline(cin, s);
    cout << "The string above without punctuation: ";
    for (auto& i : s) {
        if (!ispunct(i)) {
            cout << i;
        }
    }
    cout << endl;
    return 0;
}
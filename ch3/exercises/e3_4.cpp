#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s1, s2;

    std::getline(cin, s1);
    std::getline(cin, s2);

    // determine which string is larger
    if (s1 == s2) {
        cout << "String " << s1 << " is equal to " << s2 << endl;
    } else if (s1 > s2) {
        cout << "String " << s1 << " is larger than " << s2 << endl;
    } else if (s1 < s2) {
        cout << "String " << s1 << " is smaller than " << s2 << endl;
    }

    // determine which string has longer length
    if (s1.size() == s2.size()) {
        cout << "String " << s1 << " is equal to " << s2 << endl;
    } else if (s1.size() > s2.size()) {
        cout << "String " << s1 << " is longer than " << s2 << endl;
    } else if (s1.size() < s2.size()) {
        cout << "String " << s1 << " is shorter than " << s2 << endl;
    }
    return 0;
}
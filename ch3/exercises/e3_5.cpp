#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s1, s2, s3;

    std::getline(cin, s1);
    std::getline(cin, s2);
    s3 = s1 + s2;
    cout << "Concatenated version of " << s1 << " and "
        << s2 << " is " << s3 << endl;
}
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string line, word;

    // read one line at a time
    while (std::getline(cin, line))
        cout << line << endl;
    // read one word at a time
    while (cin >> word) 
        cout << word << endl;
    return 0;
}
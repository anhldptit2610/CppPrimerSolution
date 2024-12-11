#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string str = "huhuhuhuhu";

    cout << "str before: " << str << endl;
    for (auto& i : str)
        i = 'X';
    cout << "str after: " << str << endl;
    return 0;
}
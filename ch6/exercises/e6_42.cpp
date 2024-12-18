/*
    Exercise 6.42: Give the second parameter of make_plural (§ 6.3.2, p.
    224) a default argument of 's'. Test your program by printing singular and
    plural versions of the words success and failure.
*/

/* solution */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(2, "success") << endl;
    cout << make_plural(2, "failure") << endl;
}
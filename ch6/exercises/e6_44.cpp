/*
    Exercise 6.44: Rewrite the isShorter function from § 6.2.2 (p. 211) to be
    inline.
*/

/* solution */

#include <iostream>
#include <string>

using std::string;

inline bool IsShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}
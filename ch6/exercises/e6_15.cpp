#include <iostream>
#include <string>

using std::string;


// s is a string, sometimes it can be really big
// so using a reference to pass the string is good;
// we also don't want to accidentally modify the original
// content of the string, so a const is needed.

// c is simply a char(1 byte)

// occurs needs to be modified so a reference is used

// when we make s a plain reference, it's still ok in this function
// but maybe not ok in others

// when we make occurs a reference to const, the content of occurs can't be modified

string::size_type FindChar(const string& s, char c,
                        string::size_type& occurs)
{
    auto ret = s.size();

    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}
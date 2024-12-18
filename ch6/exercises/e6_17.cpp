/*
    Exercise 6.17: Write a function to determine whether a string contains
    any capital letters. Write a function to change a string to all lowercase. Do
    the parameters you used in these functions have the same type? If so, why?
    If not, why not?
*/

/* solution */

#include <string>

bool IsCapitalCharInString(const std::string& s)
{
    for (auto i : s) {
        if (isupper(i))
            return true;
    }
    return false;
}

void ToLowerString(std::string& s)
{
    for (auto& i : s)
        i = tolower(i);
    return;
}

/*
    parameters used in these two function don't really have the same type. 
    IsCapitalCharInString use reference to const because it doesn't modify
    the content of the string; meanwhile, ToLowerString need to modify the 
    content of s, so a reference to string is needed.
*/
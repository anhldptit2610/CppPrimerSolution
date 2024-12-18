/*
    Exercise 6.37: Write three additional declarations for the function in the
    previous exercise. One should use a type alias, one should use a trailing
    return, and the third should use decltype. Which form do you prefer and
    why?
*/

/* solution */

#include <string>

/* type alias */
typedef std::string arrref[10];
arrref& TypeAlias();

/* trailing return */
auto TrailingReturn() -> std::string(&)[10];

/* decltype */
std::string arr[10];
decltype((arr)) UsingDecltype();
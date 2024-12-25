/*
    Exercise 7.34: What would happen if we put the typedef of pos in the
    Screen class on page 285 as the last line in the class?
*/

/* solution */

#include <string>

int height;
class Screen {
public:
    typedef std::string::size_type pos;
    void dummy_fcn(pos height) {
        cursor = width * height; // which height? the parameter
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
};

/* 
    It would be an error because the compiler doesn't know what
    'pos' is when encountering it. The compiler needs the information
    of the type(size, operations, etc) before compiling.
*/


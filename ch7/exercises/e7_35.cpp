/*
    Exercise 7.35: Explain the following code, indicating which definition of
    Type or initVal is used for each use of those names. Say how you would
    fix any errors.

    typedef string Type;
    Type initVal();
    class Exercise {
    public:
        typedef double Type;
        Type setVal(Type);
        Type initVal();
    private:
        int val;
    };
    Type Exercise::setVal(Type parm) {
        val = parm + initVal();
        return val;
    }
*/

/* solution */

#include <string>

using std::string;

typedef string Type;

Type initVal();     // string initVal;

class Exercise {
public:
    typedef double Type;
    Type setVal(Type);      // shadow the outer typedef, so double setVal(double)
    Type initVal();         // also double initVal()
private:
    int val;
};

Type Exercise::setVal(Type parm) {      // now Type become string, so an error
    val = parm + initVal();
    return val;
}

Exercise::Type Exercise::setVal(Exercise::Type parm) {  // quick fix
    val = parm + initVal();
    return val;
}
/*
    Exercise 6.31: When is it valid to return a reference? A reference to
    const?
*/

/* solution */

/*
    It's valid to return a reference when the reference refer to a non-local
    object of the function. For example:

    int& SomeFunc(int& ref)
    {
        return ref;     // that should be legal
    }
*/
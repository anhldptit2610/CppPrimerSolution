/*
    Exercise 6.39: Explain the effect of the second declaration in each one of
    the following sets of declarations. Indicate which, if any, are illegal.
    (a) int calc(int, int);
    int calc(const int, const int);
    (b) int get();
    double get();
    (c) int *reset(int *);
    double *reset(double *);
*/

/* solution */

/*
    (a): the second calc takes two const argument. It's legal
    (b): the second get has no parameter, just like the original one.
         It's illegal because they have the same parameter list.
    (c): the second reset is for double variable, and it's legit.
*/
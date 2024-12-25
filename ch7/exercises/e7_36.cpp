/*
    Exercise 7.36: The following initializer is in error. Identify and fix the
    problem.

    struct X {
        X (int i, int j): base(i), rem(base % j) { }
        int rem, base;
    };
*/

/* solution */

in this struct base is declared after rem, so in the constructors
rem will be initialized first. Since base hasn't initialized yet,
its value would be undefined -> rem value would also undefined

The fix:

    struct X
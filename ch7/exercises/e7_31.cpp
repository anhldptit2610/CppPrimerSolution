/*
    Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer to
    Y, and Y has an object of type X.
*/

/* solution */

class X;
class Y;

class X {
    Y *py;
};

class Y {
    X ox;
};
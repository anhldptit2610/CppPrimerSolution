/*
    Exercise 6.50: Given the declarations for f from page 242, list the viable
    functions, if any for each of the following calls. Indicate which function is the
    best match, or if the call is illegal whether there is no match or why the call
    is ambiguous.
    (a) f(2.56, 42)
    (b) f(42)
    (c) f(42, 0)
    (d) f(2.56, 3.14)
*/

/* solution */

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

f(2.56, 42);    // error, it's ambiguous because there's no best match
f(42);          // void f(int) is the best match
f(42, 0);       // void f(int, int) is the best match
f(2.56, 3.14);  // void f(double, double = 3.14) is the best match
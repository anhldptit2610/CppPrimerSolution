/*
    Exercise 6.40: Which, if either, of the following declarations are errors?
    Why?
    (a) int ff(int a, int b = 0, int c = 0);
    (b) char *init(int ht = 24, int wd, char bckgrnd);
*/

/* solution */

int ff(int a, int b = 0, int c = 0);            // legal
char *init(int ht = 24, int wd, char bckgrnd);  // illegal, parameters after ht must have default argument
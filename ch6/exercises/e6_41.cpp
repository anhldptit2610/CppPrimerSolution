/*
    Exercise 6.41: Which, if any, of the following calls are illegal? Why? Which,
    if any, are legal but unlikely to match the programmer’s intent? Why?
    char *init(int ht, int wd = 80, char bckgrnd = ' ');
    (a) init();
    (b) init(24,10);
    (c) init(14, '*');
*/

/* solution */

char *init(int ht, int wd = 80, char bckgrnd = ' ');
init();                 // illegal, ht doesn't have default argument
init(24,10);            // legal
init(14, '*');          // legal, but seems not the programmer intended
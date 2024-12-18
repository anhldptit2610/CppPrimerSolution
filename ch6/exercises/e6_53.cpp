// Exercise 6.53: Explain the effect of the second declaration in each one of
// the following sets of declarations. Indicate which, if any, are illegal.

/* solution */

(a) int calc(int&, int&);               
int calc(const int&, const int&);       // using a const reference, prevent changing content of data

(b) int calc(char*, char*);
int calc(const char*, const char*);     // we can't change the content of which string char * points to

(c) int calc(char*, char*);
int calc(char* const, char* const);     // seems like illegal, but I'm not sure
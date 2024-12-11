int i = 0;

double *dp = &i;        // illegal, can't directly assigned like this
int *ip = i;            // legal, but surely leads to UB(actually illegal)
int *p = &i;            // legel


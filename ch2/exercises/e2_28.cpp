int i, *const cp;       // cp is illegal because const pointer must be init
int *p1, *const p2;     // again
const int ic, &r = ic;  // legal
const int *const p3;    // illegal
const int *p;           // legal

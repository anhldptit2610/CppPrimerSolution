int i = -1, &r = 0;         // illegal, we can't have a reference to literal
int *const p2 = &i2;        // legal if i2 is an int
const int i = -1, &r = 0;   // illegal
const int *const p3 = &i2;  // definitely legal
const int *p1 = &i2;        // legal
const int &const r2;        // illegal, reference must points to a object
const int i2 = i, &r = i;   // legal
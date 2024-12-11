i = ic;     // legal
p1 = p3;    // illegal
p1 = &ic;   // illegal
p3 = &ic;   // legal
p2 = p1;    // legal
ic = *p3;   // legal
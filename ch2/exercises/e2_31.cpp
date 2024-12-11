r1 = v2;    // illegal, reference can't change which object it refers to
p1 = p2;    // illegal, int pointer can't points to const int
p1 = p3;    // also
p2 = p1;    // ok
p2 = p3;    // ok
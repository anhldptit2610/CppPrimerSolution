const int buf;          // illegal, because const variable needs initialization
int cnt = 0;            // legal
const int sz = cnt;     // legal
++cnt;                  // legal
++sz;                   // illegal
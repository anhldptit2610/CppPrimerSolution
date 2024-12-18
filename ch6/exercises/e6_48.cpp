/*
    Exercise 6.48: Explain what this loop does and whether it is a good use of
    assert:
*/

/* solution */

string s;
while (cin >> s && s !=sought) {}
assert(cin);

/* 
    this loop doesn't quit until a valid string is input. After
    quitting the loop, the program checks if cin stream is valid,
    or what the user type in.
    (this loop takes the user input, and will spin until either user
    typed in invalid string, or a valid and matched with sought string)
    if the string is invalid, assert(cin) will be raised.
*/
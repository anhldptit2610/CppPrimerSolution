/*
    Exercise 6.43: Which one of the following declarations and definitions would
    you put in a header? In a source file? Explain why.
*/

/* solution */

inline bool eq(const BigInt&, const BigInt&) {...}  // source file
void putValues(int *arr, int size);                 // header
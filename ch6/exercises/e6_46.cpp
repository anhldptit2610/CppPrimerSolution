/*
    Exercise 6.46: Would it be possible to define isShorter as a constexpr?
    If so, do so. If not, explain why not.
*/

/* solution */

/* 
    no, isShorter can't be a constexpr if the program requires user to
    input the two strings. If isShorter is called with two constant string
    then it can be constexpr
*/
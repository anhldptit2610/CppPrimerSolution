/*
    Exercise 6.35: In the call to fact, why did we pass val - 1 rather than
    val--?
*/

/* solution */

/* 
    if we pass val--, then the value passed to the recursive
    function would be val, not val - 1; it can leads to wrong 
    behavior.
*/
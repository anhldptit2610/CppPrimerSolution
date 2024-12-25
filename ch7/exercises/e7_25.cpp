/*
    Exercise 7.25: Can Screen safely rely on the default versions of copy and
    assignment? If so, why? If not, why not?
*/

/* solution */

// in the case of Screen class in example, we can. Because the type of 
// members in Screen class are built in and the std::string has copy and
// assignment implemented.
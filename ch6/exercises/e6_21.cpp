/*
    Exercise 6.21: Write a function that takes an int and a pointer to an int
    and returns the larger of the int value or the value to which the pointer
    points. What type should you use for the pointer?
*/

/* solution */

int E6_21(int a, const int *pi)
{
    if (a >= *pi)
        return a;
    else 
        return *pi;
}

/* 
    pi should be a pointer to const int; this way the function can't 
    accidentally modify the value which pi points to.
*/
/*
    Exercise 6.22: Write a function to swap two int pointers.
*/

/* solution */

void SwapTwoIntPointers(int **x, int ** y)
{
    int *tmp = *x;
    *x = *y;
    *y = tmp;
}
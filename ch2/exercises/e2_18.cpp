#include <iostream>


int main()
{
    int x = 3, z = 1;
    int *y = &x;
    
    // code to change the value of a pointer
    y = &z;
    // code to change the value to which the pointer points
    *y = 4;
    return 0;
}
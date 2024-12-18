/* 
    Exercise 6.26: Write a program that accepts the options presented in this
    section. Print the values of the arguments passed to main.
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
        std::cout << argv[i] << ' ';
    std::cout << std::endl;
    return 0;
}
#include <iostream>

int main()
{
    // std::cin >> int input_value; is illegal. The compiler thinks int is a variable, and 
    // no variable can have name same as a type. Fix as below.
    
    int input_value;
    std::cin >> input_value;

    // initialize i to 3. The part after . will be truncated.
    int i = (3.14);
    std::cout << i << std::endl;

    // error. wage is not created.
    // double salary = wage = 9999.99;
    // if we want to initialize both salary and wage to 9999.99, simply just do this
    double salary, wage;
    salary = wage = 9999.99;

    // initialize x to 3. The part after . will be truncated.
    int x = 3.14;
    std::cout << x << std::endl;

    return 0;
}
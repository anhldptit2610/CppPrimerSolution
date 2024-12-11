#include <iostream>

std::string global_str;     // default value, maybe nullptr?    (wrong. Empty string)
int global_int;             // default value, 0

int main()
{
    int local_int;          // undefined value
    std::string local_str;  // undefined value      (wrong. Empty string cuz local_str is a object of std::string,
                            //                       which should be initialized automatically if no value is assigned.)

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;
    std::cout << local_str << std::endl;
    std::cout << local_int << std::endl;
}
// Predict
// std::cout << "/*";                   legal
// std::cout << "*/";                   legal
// std::cout << /* "*/" */              illegal
// std::cout << /*  "*/" /* "/*" */     legal

#include <iostream>

int main()
{
std::cout << "/*";
std::cout << "*/";
// std::cout << /* "*/" */;
std::cout << /*  "*/" /* "/*" */;
}
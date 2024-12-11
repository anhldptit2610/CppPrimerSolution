#include <iostream>
#include <string>

struct Sales_data {
    std::string ISBN() const { return bookNo; }
    Sales_data& Combine(const Sales_data& );
    double AvgPrice() const;
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};
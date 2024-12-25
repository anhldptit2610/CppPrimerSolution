#ifndef SALES_DATA_H_
#define SALES_DATA_H_

#include <string>
#include <iostream>

struct Sales_data;


class Sales_data {
public:
    // constructors added
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) { }
    Sales_data(const std::string& s, unsigned n, double p) :
                bookNo(s), units_sold(n), revenue(p * n) { }
    Sales_data(std::istream& is) {
        double price = 0;
        is >> bookNo >> units_sold >> price;
        revenue = price * units_sold;
    }
    // new members: operations on Sales_data objects
    std::string ISBN() const { return bookNo; }
    Sales_data& Combine(const Sales_data&);
private:
    double AvgPrice() const;
    // data members are unchanged from 2.6.1(p. 72)
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

#endif
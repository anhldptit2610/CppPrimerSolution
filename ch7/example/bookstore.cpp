#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;

    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.ISBN() == trans.ISBN()) {
                total.Combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

double Sales_data::AvgPrice() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::Combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;

    sum.Combine(rhs);
    return sum;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.ISBN() << " " << item.units_sold << " "
        << item.revenue << " " << item.AvgPrice();
    return os;
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;

    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
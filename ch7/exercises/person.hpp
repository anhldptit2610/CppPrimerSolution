#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

struct Person {
friend void Read(Person&);
friend std::ostream& Print(const Person&);

public:
    // constructors
    Person(std::string _name, std::string _addr) : name(_name), address(_addr) { }
    Person(std::string _name) : name(_name) { }
    std::string GetName() const { return name; }
    std::string GetAddress() const { return address; }
private:
    // members
    std::string name;
    std::string address;
};

void Read(Person& p)
{
    std::cin >> p.name >> p.address;
}

std::ostream& Print(const Person& p)
{
    return std::cout << p.name << p.address;
}



#endif
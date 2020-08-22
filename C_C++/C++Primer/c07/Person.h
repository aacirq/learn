#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person {
friend std::istream &read(std::istream&, Person&);
friend std::ostream &print(std::ostream&, const Person&);
public:
    Person() = default;
    Person(std::string &n, std::string &a) : name(n), address(a) {}
    explicit Person(std::istream &is);

    std::string who() const { return name; }
    std::string where() const { return address; }
private:
    std::string name;
    std::string address;
};

std::istream &read(std::istream&, Person&);
std::ostream &print(std::ostream&, const Person&);

#endif
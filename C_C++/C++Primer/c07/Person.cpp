#include "Person.h"

Person::Person(std::istream &is) {
    read(is, *this);
}

std::istream &read(std::istream &is, Person &item) {
    is >> item.name >> item.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &item) {
    os << item.who() << item.where();
    return os;
}
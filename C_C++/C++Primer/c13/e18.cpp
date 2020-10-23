#ifndef __EMPLOYEE_H
#define __EXPLOYEE_H

#include <string>

class Employee {
public:
    Employee() : no(no_generator++) { }
    Employee(const std::string& nm) : name(nm), no(no_generator++) { }
    Employee(const Employee& e) = delete;
    Employee& operator=(const Employee& e) = delete;

private:
    static int no_generator;
    std::string name;
    int no;
};

int Employee::no_generator = 0;

#endif
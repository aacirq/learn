#include <iostream>
#include <string>

#ifndef MY_DATE_H
#define MY_DATE_H

class My_date {
public:
    My_date() = default;
    My_date(const std::string &str) {
        unsigned format, tag;
        if(str.find('/') != std::string::npos) { format = 0x01; }
        else { format = 0x10; }
        
        if(format == 0x01){
            auto first  = str.find_first_of('/');
            auto second = str.find_first_of('/', first + 1);
            auto third  = str.find_first_of('/', second + 1);
            month = std::stoi(str.substr(0, first));
            day   = std::stoi(str.substr(first + 1, second - first - 1));
            year  = std::stoi(str.substr(second + 1, 4));
        } else {
            if      (str.find("Jan") != std::string::npos) month = 1;
            else if (str.find("Feb") != std::string::npos) month = 2;
            else if (str.find("Mar") != std::string::npos) month = 3;
            else if (str.find("Apr") != std::string::npos) month = 4;
            else if (str.find("May") != std::string::npos) month = 5;
            else if (str.find("Jun") != std::string::npos) month = 6;
            else if (str.find("Jul") != std::string::npos) month = 7;
            else if (str.find("Aug") != std::string::npos) month = 8;
            else if (str.find("Sep") != std::string::npos) month = 9;
            else if (str.find("Oct") != std::string::npos) month = 10;
            else if (str.find("Nov") != std::string::npos) month = 11;
            else if (str.find("Dec") != std::string::npos) month = 12;

            auto pos = str.find(' ');
            day  = std::stoi(str.substr(pos + 1, str.find_first_of(", ", pos + 1) - pos - 1));
            year = std::stoi(str.substr(str.find_last_of(", ") + 1, 4));
        }
    }

    void print() {
        std::cout << month << "-" << day << "-" << year;
    }
private:
    unsigned year, month, day;
};

#endif

int main() {
    My_date date1("1/30/1990");
    date1.print();
    std::cout << std::endl;

    My_date date2("January 1, 1990");
    date2.print();
    std::cout << std::endl;

    My_date date3("Jan 1 1990");
    date3.print();
    std::cout << std::endl;
    return 0;
}
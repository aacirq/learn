#ifndef _MYSTRING_H
#define _MYSTRING_H

class String {
public:
    String(const char* c = 0);
    String(const String& str);
    String& operator = (const String& str);
    ~String();
    char* get_c_str() const { return m_data; }

private:
    char* m_data;
};

#include <cstring>

inline
String::String(const char* c) {
    if(c) {
        m_data = new char[strlen(c) + 1];
        strcpy(m_data, c);
    }
    else {
        m_data = new char[1];
        m_data[0] = '\0';
    }
}

inline
String::String(const String& str) {
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

inline
String& String::operator=(const String& str) {
    if(this == &str) {
        return *this;
    }
    delete[] m_data;
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}

inline
String::~String() {
    delete[] m_data;
}

#include <iostream>

std::ostream& operator<<(std::ostream& os, const String& str) {
    os << str.get_c_str();
    return os;
}

#endif
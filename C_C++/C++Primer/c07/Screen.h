#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include "Window_mgr.h"

class Screen {
    friend void Window_mgr::clear(screenIndex);
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), 
                                     contents(ht * wd, c) {}
    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char c)
                    { contents[cursor] = c; return *this; }
    Screen &set(pos row, pos col, char c)
                    { contents[row * width + cursor] = c; return *this; }
    Screen &display(std::ostream &os)
                    { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const
                    { do_display(os); return *this; }
private:
    void do_display(std::ostream &os) const { os << contents; }
    pos cursor = 0;
    pos width = 0, height = 0;
    std::string contents;
};

#endif
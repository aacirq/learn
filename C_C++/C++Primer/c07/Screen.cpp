#include "Screen.h"

char Screen::get(pos ht, pos wd) const {
    return contents[ht * width + wd];
}

Screen &Screen::move(pos r, pos c) {
    cursor = r * width + c;
    return *this;
}
#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>

class Screen;

class Window_mgr {
public:
    using screenIndex = std::vector<Screen>::size_type;
    void clear(screenIndex);

private:
    std::vector<Screen> screens;
};

#endif
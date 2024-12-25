#ifndef WINDOW_MGR_HPP
#define WINDOW_MGR_HPP

#include <vector>
#include "screen.hpp"

class Window_mgr {
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

#endif
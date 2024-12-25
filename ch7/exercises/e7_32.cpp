/*
    Exercise 7.32: Define your own versions of Screen and Window_mgr in
    which clear is a member of Window_mgr and a friend of Screen.
*/

/* solution */

class Window_mgr;

class Screen {
    friend void Window_mgr::clear();
    // other data
};

class Window_mgr {
    // other members
public:
    void clear();
};
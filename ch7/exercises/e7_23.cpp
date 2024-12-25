/*
    Exercise 7.23: Write your own version of the Screen class.
*/

/* solution */

#include <vector>

class Screen {
private:
    int width = 240;
    int height = 320;
    int x = 0;
    int y = 0;
    std::vector<char> screenBuf;
public:
    Screen() = default;
    Screen(int wd, int hg) : width(wd), height(hg), screenBuf(wd * hg, ' ') { }
    Screen(int wd, int hg, char c) : width(wd), height(hg), screenBuf(wd * hg, c) { }
    char Get() const { return screenBuf[y * width + x]; }
    char Get(int _x, int _y) const { return screenBuf[_y * width + _x]; }
    void Set(int cx, int cy, char c) { screenBuf[cy * width + cx] = c; }
};
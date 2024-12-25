/*
    Exercise 7.27: Add the move, set, and display operations to your
    version of Screen. Test your class by executing the following code:

    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
*/

/* solution */

#include <vector>
#include <iostream>

using std::cin;
using std::cout;

class Screen {
private:
    int width = 10;
    int height = 10;
    int x = 0;
    int y = 0;
    std::vector<char> screenBuf;
public:
    Screen() = default;
    Screen(int wd, int hg) : width(wd), height(hg), screenBuf(wd * hg, ' ') { }
    Screen(int wd, int hg, char c) : width(wd), height(hg), screenBuf(wd * hg, c) { }
    char Get() const { return screenBuf[y * width + x]; }
    char Get(int _x, int _y) const { return screenBuf[_y * width + _x]; }
    Screen& Move(int nx, int ny) { x = nx; y = ny; return *this; }
    Screen& Set(char c) { screenBuf[y * width + x] = c; return *this; }
    const Screen& Display(std::ostream& os) const 
    { 
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                os << screenBuf[i * width + j];
            }
            os << "\n";
        }
        return *this;
    }
};

int main()
{
    Screen myScreen(5, 5, 'X');
    
    myScreen.Move(4, 0).Set('#').Display(cout);
    cout << "\n";
    myScreen.Display(cout);
    cout << "\n";
    return 0;
}
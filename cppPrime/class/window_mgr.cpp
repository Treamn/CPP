#include <iostream>
#include <vector>
using namespace std;

class window_mgr{
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex);
    private:
        std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];  //s是想清空的屏幕
    s.contents = string(s.height * s.width, ' '); //将选定的屏幕重置为空白
}
#include <iostream>
#include <vector>
using namespace std;

class Screen{
    public:
        typedef std::string::size_type pos;
        Screen &display(std::ostream &os){
            do_display(os);
            return *this;
        }
        Screen &display(std::ostream &os) const{
            do_display(os);
            return *this;
        }
        Screen &set(char);
        Screen &set(pos, pos, char);
        Screen() = default;//Screen有另一个构造函数，所以本函数是必须的。
        Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd,c){}//cursor初始值初始化为0
        char get() const{
            return contents[cursor];  //隐式内联
        }
        inline char get(pos ht, pos wd) const; //显式内联
        Screen &move(pos r, pos c);  //能在之后设置为内联
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        void do_display(std::ostream &os) const{
            os << contents;
        }
};

inline //在函数的定义处指定inline
Screen &Screen::move(pos r, pos c){
    pos row = r * width;  // 计算行的位置
    cursor = row + c;  //在行内将光标移动到指定列
    return *this;  //以左值的形式返回对象
}
char Screen::get(pos r, pos c) const{  // 在类的内部声明成inline
    pos row = r * width;  //计算行的位置
    return contents[row + c];  //返回给定字符
}

inline Screen &Screen::set(char c){
    contents[cursor] = c; //
    return *this;  //将this对象作为左值返回
}
inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r * width + col] = ch;
    return *this;
}



// class Screen{
//     public:
//         void some_member() const;
//     private:
//         mutable size_t access_ctr;
// };
// void Screen::some_member() const{
//     ++access_ctr;
// }

class Windoe_mgr{
    private:
        std::vector<Screen> screens{Screen(24, 80, ' ')};
};
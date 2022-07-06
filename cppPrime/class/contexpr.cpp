#include <iostream>
using namespace std;

class Debug{
public:
    constexpr Debug(bool b = true):hw(b), io(b), other(b){}
    constexpr Debug(bool h, bool i, bool o):hw(h), io(i), other(o){}
    constexpr bool any(){
        return hw || io || other;
    }
    void set_io(bool b){
        io = b;
    }
    void set_hw(bool b){
        hw = b;
    }
    void set_other(bool b){
        other = b;
    }
private:
    bool hw;
    bool io;
    bool other;
};


constexpr Debug io_sub(false, true, false); //调试io
if (io_sub.any()) // 等价于if(true)
    cerr << "print appropriate error message" << endl;
constexpr Debug prod(false); // 无调试
if (prod.any()) // 等价于if(false)
    cerr << "print an error message" << endl;
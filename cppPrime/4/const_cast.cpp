#include <iostream>
using namespace std;

struct type{
    int i;
    type(): i(3){} // 构造函数
    void f(int v) const{
        // this->i = v;
        const_cast<type*>(this)->i = v; 
    }
};

int main(){
    int i = 3;
    const int& rci = i;
    cout << rci << endl; // 3
    const_cast<int&>(rci) = 4;
    cout << rci << endl; // 4

    type t;
    t.f(5);
    cout << t.i << endl;

}
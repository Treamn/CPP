#include <iostream>
namespace N{
    void f(int, int = 1);
}

using N::f;
void g(){
    f(7);
    f();
}

namespace N{
    void f(int = 2, int);
}

void h(){
    f();
}
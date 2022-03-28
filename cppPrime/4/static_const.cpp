#include <iostream>
#include <vector>
using namespace std;

struct B{
    int m = 0;
    void hello() const{
        cout << "this is B" << endl;
    }
};

struct D:B{
    void hello() const{
        cout << "this is D" << endl;
    }
};

int main(){
    D d;
    B& br = d;
    br.hello();
    D& another_d = static_cast<D&>(br);
    another_d.hello();

}
#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Tracer{
    string mess;
    Tracer(const string& s):mess{s}{clog << mess;}
    ~Tracer(){clog << "~" << mess;}
};


void  f(const std::vector<int>& v){
    Tracer tr{"in_f()\n"};
    for(auto x : v){
        Tracer tr{string{"v loop "}+to_string(x)+'\n'};
    }
}

int main(){
    f({2,3,5});
}
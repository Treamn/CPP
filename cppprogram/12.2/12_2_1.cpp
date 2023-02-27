#include<iostream>
using namespace std;

void x(int val, int& ref){
    ++val;
    ++ref;
}

void y(int val, const int& cref){
    ++val;
    cref;
}

int main(){
    // int a{0};
    // int b{0};
    int a{0},b{0};
    for(int i = 0; i < 5; ++i){
        x(a,b);
        cout << a << ',' << b << endl;
    }

}
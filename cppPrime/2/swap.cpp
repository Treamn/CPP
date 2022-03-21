#include <iostream>
#include <string>
using namespace std;

int main(){
    string a("aaa");
    string b("bbb");
    a.swap(b);
    cout << a << " " << b;
}
#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int& r = a;
    cout << a << endl;
    r = 1;
    cout << a << endl;

    return 0;
}
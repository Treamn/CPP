#include <iostream>
using namespace std;

int main(){
    int n = 0, i = 42;
    int* p = &n;
    int* q = &i;
    cout << *p << *q << endl;
    *p = 4;
    cout << n << endl;
    p = q;
    cout << *p << n << endl;
}
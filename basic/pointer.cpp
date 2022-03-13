#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ip;
    int *ptr = NULL;

    ip = &a;

    cout << a << endl;
    cout << ip << endl;
    cout << *ip << endl;
    cout << ptr << endl;

    return 0;
}
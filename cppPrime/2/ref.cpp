#include <iostream>
using namespace std;

int main(){
    // int i = 5;
    // int &j = i;
    // j = 10;
    // cout << i << "  " << j << endl;
    // i++;
    // j++;
    // cout << i << "  " << j << endl;

    int a = 10;
    const int b = 5;
    int &a1 = a;
    const int &b1 = b;
    a1--;
    // b1++;
    // int &c1 = b;
    cout << a1 << ' ' << b1 << endl;


    return 0;
}
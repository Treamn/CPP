#include <iostream>
using namespace std;

int main(){
    int a = 1;

    int *p2;
    p2 = &a;
    cout << p2 << endl;
    cout << *p2 << endl;

    int **pp2 = &p2;
    cout << pp2 << endl;
    cout << *pp2 << endl;
    cout << **pp2 << endl;

    int *&r = p2;
    r = &a;
    *r = 0;
    
    const int &c1 = 10;
    cout << c1;


}
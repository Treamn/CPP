#include <iostream>
using namespace std;

int main(){
    // int a = 10;
    // int *p = &a;
    // int **pp = &p;
    // cout << **pp << "  " << *pp << "  " << *p << "  " << p;
    // cout << endl;

    // //----------------------------------------
    // int *&r = p;
    // cout << r;

    // int a = 10;
    // int* p = &a;
    // cout << "*p: " << *p << endl;
    // cout << "p: " << p << endl;
    // *p = 0;
    // cout << *p << '  ' << a;
    // cout << *p << endl;
    // cout << a << endl;

    // int *ep1 = nullptr;
    // int *ep2 = 0;
    // int *ep3 = NULL;
    // int a = 10;

    // cout << *ep1 << endl;
    // cout << *ep2 << endl;
    // cout << *ep3 << endl;

    int i = 10;
    int j = 5;

    int *p1 = &i;
    int *p2 = &j;
    int *p3 = 0;

    if(!p3){
        cout << "*p1: " << *p1 << endl;
    }

    p3 = p2;

    if(p3 == p2){
        cout << "*p3: " << *p3 << endl;
    }



    return 0;

}
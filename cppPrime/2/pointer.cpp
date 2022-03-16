#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    cout << **pp << "  " << *pp << "  " << *p << "  " << p;
    cout << endl;

    //----------------------------------------
    int *&r = p;
    cout << r;

}
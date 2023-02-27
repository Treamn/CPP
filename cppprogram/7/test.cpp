#include<iostream>
using namespace std;

void fp(int i[]){
    for(int* p = i; *p != 0; ++p)
        *p++;
}

int main(){
    int a[] = {0,1,2,3,4,5};
    cout << a << endl;
    fp(a);
    cout << a;
    // for(int* p = a; *p != 0; ++p)
    //     cout << *p;
    // // return 0;
}
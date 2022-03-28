#include <iostream>
using namespace std;

int jc(int a){
    int res = 1;
    for(int i = 1; i <= a; i++){
        res *= i;
    }
    return res;
}

int main(){
    int a;
    cin >> a;
    cout << jc(a) << endl;
}
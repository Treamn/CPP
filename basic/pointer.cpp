#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int a[]{0,1,2,3,4,5,6,7,8,9};
    int *p = a;
    // cout << end(a) << endl;
    for( ; *p != a[9]; p++){
        cout << *p << " ";
    }
}
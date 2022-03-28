#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    (a,b) = (b,a);
    cout << a << " " << b;
}
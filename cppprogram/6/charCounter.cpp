#include<iostream>
using namespace std;

void digits(){
    for(int i = 0; i != 10; ++i)
        cout << static_cast<char>('0' + i);
}

int main(){
    // digits();
    int a;
    cout << ++a;
}
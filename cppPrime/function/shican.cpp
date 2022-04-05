#include <iostream>
using namespace std;


void print(int a, int b, char c){
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
};

void print(int a, int b = 4, char c = 's');


int main(){
    print(1);

    return 0;
}
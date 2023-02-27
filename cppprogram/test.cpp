#include <iostream>
using namespace std;

int add(){
    int i,j;
    cout << "inout i: " << endl;
    cin >> i;
    cout << "input j: " << endl;
    cin >> j;
    return i+j; 
}


int main(){
    cout << add() << endl;
    return 0;
}
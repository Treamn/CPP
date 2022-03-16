#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int &j = i;
    cout << i << "  " << j;
    return 0;
}
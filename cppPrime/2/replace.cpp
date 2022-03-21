#include <iostream>
#include <string>
using namespace std;

int main(){
    string str("hello world");
    str.replace(0,5, "red");
    cout << str << endl;
    str.replace(str.begin(), str.begin()+3, 2 , 'A');
    cout << str << endl;
}
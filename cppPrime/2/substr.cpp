#include <string>
#include <iostream>
using namespace std;

int main(){
    string s("0123456789abcdefghij");
    cout << s.substr(10) << endl;
    // abcdefghij
    cout << s.substr(5, 3) << endl;
    // 567
    cout << s.substr(s.size()-3, 50) << endl;
    // hij
}
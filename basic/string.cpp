#include <iostream>
#include <string>
using namespace std;

void reverse(){
    string str;
    cin >> str;
    int len = str.size();
    cout << str << endl;
    for(int i = len; i >= 0; i--){
        cout << str[i];
    }
}

int main(){
    reverse();
    return 0;
}
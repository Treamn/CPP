#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    getline(cin ,line);
    cout << line.front() << endl;
    cout << line.back() << endl;
    cout << line.length();
}

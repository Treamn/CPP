#include <iostream>
#include <string>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s("Exenplar!");
    *s.rbegin() = 'y';
    cout << s << endl;  // Exemplary

    string c; 
    copy(s.crbegin(), s.crend(), back_inserter(c));
    cout << c << endl;  // yralpmexE
}
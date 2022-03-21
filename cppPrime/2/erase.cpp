#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s("This is an example");
    s.erase(0,5);
    cout << s <<endl; //is an example

    s.erase(find(s.begin(), s.end(), ' '));
    cout << s <<endl; //isan example

    s.erase(s.find(' '));
    cout << s << endl;//isan

}
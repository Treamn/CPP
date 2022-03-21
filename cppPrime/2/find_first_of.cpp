#include <iostream>
#include <string>
using namespace std;

int main(){
    const string s("Hello World!");
    const string search_str("o");
    const char* search_cstr = "Good Bye!";
    cout << s.find_first_of(search_str) << endl;
    // 4
    cout << s.find_first_of(search_str, 5) << endl;
    // 7
    cout << s.find_first_of(search_cstr) << endl;
    // 1
    cout << s.find_first_of(search_cstr, 5, 2) << endl;
    // 7
}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
//     {
//         string s("Exemplary");
//         char& back = s.back();
//         back = 's';
//         cout << s << endl;
//     }
//     {
//         string const c("Exemplary");
//         char const& back = c.back();
//         cout << back << endl;
//     }
    string line;
    getline(cin, line);
    // cout << line.size();
    for(auto &x : line){
        x = toupper(x);
    }
    cout << line;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    {
        string s("Exemplary");
        char& back = s.back();
        back = 's';
        cout << s << endl;
    }
    {
        string const c("Exemplary");
        char const& back = c.back();
        cout << back << endl;
    }
}
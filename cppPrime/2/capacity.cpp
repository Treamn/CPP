#include <iostream>
#include <string>
using namespace std;

void show_capacity(string const& s){
    cout << " " << s << " has capacity " << s.capacity() << endl;
}

int main(){
    string s("Exemplar");
    show_capacity(s);  // Exemplar has capacity 15

    s += " is an example.";
    show_capacity(s);  //  Exemplar is an example. has capacity 30
}
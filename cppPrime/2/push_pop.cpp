#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v){
    for(auto i : v)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<int> v{1,2,3,4,5};
    print(v);
    v.push_back(6);
    print(v);
    v.pop_back();
    v.pop_back();
    print(v);
}
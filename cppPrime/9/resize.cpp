#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};
    cout << vec.size() << ' ' << vec[9] << endl;
    vec.resize(100);
    cout << vec.size() << ' ' << vec[9] << endl;
    vec.insert(vec.begin()+9, 25);
    cout << vec.size() << ' ' << vec[9] << endl;
    vec.erase(vec.begin()+9, vec.end());
    cout << vec.size() << ' ' << vec[9] << endl;


    vector<int> v1;  
    cout << v1.size() << ' ' << v1.capacity() << endl;
    for(auto &x : vec){
        v1.emplace_back(x);
    }
    cout << v1.size() << ' ' << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << v1.size() << ' ' << v1.capacity() << endl;


    return 0;
}
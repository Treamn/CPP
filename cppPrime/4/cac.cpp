#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec;
    for(int i = 0; i !=10; ++i){
        ivec.push_back(i);
    }
    for(auto &i : ivec){
        if((i % 2) != 0){
            i = i * 2;
        }
    }
    for(auto i : ivec){
        cout << i << ' ';
    }
}
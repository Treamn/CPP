#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int cir = 2*n - 2;
        int pos = time % cir;
        vector<int> v;

        for(int i = 1; i <= n; i++){
            v.emplace_back(i);
        }
        for(int i = n-1; i > 1; i--){
            v.emplace_back(i);
        }
        // for(auto &x : v){
        //     cout << x << " ";
        // }
        return v[pos];
    }
};

int main(){
    Solution s1;
    cout << s1.passThePillow(4,5);
}
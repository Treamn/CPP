#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxScore(vector<int>& nums) {
        int ans = 0;
        for(auto &x : nums){
            if(x >= 0){
                ans += x;
            }
        }
        return ans;
    }
};


int main(){
    vector<int> v{2,-1,0,1,-3,3,-3};
    Solution s1;
    cout << s1.maxScore(v);
}
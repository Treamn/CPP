#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, maxAns = nums[0];
        for(const auto &x : nums){
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};



int main(){
    vector<int> vec{5,4,-1,7,8};
    Solution s1;
    cout << s1.maxSubArray(vec);
}
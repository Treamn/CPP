#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int,int> map;

        map[0] = 1;
        int sum = 0;
        for(auto &x : nums){
            sum += x;
            ans += map[sum-k];
            map[sum]++;
        }
        return ans;
    }
};


int main(){
    vector<int> v1{1,1,1};
    Solution s1;
    cout << s1.subarraySum(v1,2);
}



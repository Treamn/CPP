#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int length = nums.size();
        int ans;
        for(int i = 0; i < length; i++){
            int j = i+1, k = length - 1;
            while(j < k){
                int t = nums[i] + nums[j] + nums[k];
                if(target == t){
                    return t;
                }
                if(abs(t - target) < abs(ans - target)){
                    ans = t;
                }
                if(t > target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return ans;
    }
};
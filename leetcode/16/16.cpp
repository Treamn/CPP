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
        int ans, cha = INT16_MAX;

        for(int i = 1; i < length - 1; i++){
            int low = 0, high = length - 1;
            while(low != i && high != i){
                int res = nums[i] + nums[low] + nums[high];
                if((res - target) == 0){
                    ans = res;
                    return ans;
                }else if((res - target) > 0){
                    if(cha > abs(res - target)){
                        cha = abs(res - target);
                        ans = res;
                        high--;
                    }
                }else{
                    if(cha > abs(res - target)){
                        cha = abs(res - target);
                        ans = res;
                        low++;
                    }
                }

            }
        }
        return ans;
    }
};


int main(){
    vector<int> vec{-1,2,1,-4};
    Solution s1;
    cout << s1.threeSumClosest(vec, 1);
}
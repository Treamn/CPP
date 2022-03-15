#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max = 0;
        for(auto n : nums) max |= n;

        int sum = 0;
        for(int i = 1; i < (1 << nums.size()); i++){
            int cur = 0;
            for(int j = 0; j < nums.size(); j++){
                if(i & (1 << j)){
                    cur |= nums[j];
                }
            }
            if(cur == max){
                sum++;
            }
        }
        return sum;
    }
};


int main(){
    Solution ans;
    vector<int> nums = {2,2,2};
    cout << ans.countMaxOrSubsets(nums);
}
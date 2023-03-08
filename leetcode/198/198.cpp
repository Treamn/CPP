#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int rob(vector<int>& nums) {
        int length = nums.size();
        vector<int> max_money(length,0);

        if (length == 0){
            return 0;
        }
        if(length >= 1){
            max_money[0] = nums[0];
        }
        if(length >= 2){
            max_money[1] = max(nums[0], nums[1]);
        }

        for(int i = 2; i < length; i++){
            max_money[i] = max(max_money[i-2] + nums[i], max_money[i-1]);
        }
        return max_money[length-1];

    }
};


int main(){
    vector<int> v1{2, 7, 9, 3, 1};
    Solution s1;
    cout << s1.rob(v1);
}

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int zhishu(int n){
        for(int i = n-1; i > 1; i--){
            bool status = true;
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    status = false;
                    break;
                }else{
                    status = true;
                }
            }
            if(status){
                return i;
                // return i;
            }
            // break;
        }
        return 0;
    }


    bool shunxu(vector<int>& nums){
        bool status = true;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] >= nums[i+1]){
                status = false;
            }
        }
        return status;
    }


    bool primeSubOperation(vector<int>& nums) {
        if(shunxu(nums)){
            return true;
        }

        for(int i = 0; i < nums.size(); i++){
            int s = zhishu(nums[i]);
            nums[i] -= s;
            if(shunxu(nums)){
                return true;
            }
        }

        return false;
    }
};

int main(){
    vector<int> nums{15,20,17,7,16};
    Solution s1;
    // cout << s1.zhishu(2);
    cout << s1.primeSubOperation(nums);
}
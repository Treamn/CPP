#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        bool status = false;
        for(int i = 0; i < nums.size()-1; i++){
            int sum = nums[i] + nums[i+1];
            for(int j = i + 1; j < nums.size()-1; j++){
                if(sum == nums[j] + nums[j+1]){
                    status = true;
                    return status;
                }
            }
        }
        return status;
    }
};

int main(){
    vector<int> v{1,2,3,4,5};
    Solution s1;
    cout << s1.findSubarrays(v);
}
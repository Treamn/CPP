#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        int ans = 1;
        int position = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == k){
                position = i;
            }
        }

        if(position == nums.size()-1){
            return ans;
        }else if(position == 0){
            if(nums[1] > k){
                return ans+1;
            }else{
                return ans;
            }
        }else{
            int less = 0, more = 0;
            if(nums[position-1] < k && k < nums[position+1]){
                ans += 2;
                return ans;
            }else{
                return ans;
            }
        }
        
        
    }
};




int main(){
    vector<int> v1{3,2,1,4,5};
    Solution s1;
    cout << s1.countSubarrays(v1,4);
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                for(int k = j+1; k < n; k++){
                    if(nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]){
                        // cout << nums[i] << nums[j] << nums[k] << endl;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> a{2,1,1};
    cout << s1.unequalTriplets(a);
}
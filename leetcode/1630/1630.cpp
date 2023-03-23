#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size(), m = l.size();
        vector<vector<int>> arr(m, vector<int>(0,0));
        vector<bool> ans(m, true);

        for(int i = 0; i < m; i++){
            for(int j = l[i]; j <= r[i]; j++){
                arr[i].emplace_back(nums[j]);
            }
        }

        for(int i = 0; i < m; i++){
            sort(arr[i].begin(), arr[i].end());
            int minus = arr[i][1] - arr[i][0];
            for(int j = 1; j < arr[i].size(); j++){
                if(minus != (arr[i][j] - arr[i][j-1])){
                    ans[i] = false;
                }
            }
        }

        return ans;

        // for(const auto &x : arr){
        //     for(const auto &y : x){
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
    }
};



int main(){
    vector<int> nums{4,6,5,9,3,7};
    vector<int> l{0,0,2};
    vector<int> r{2,3,5};
    Solution s1;
    s1.checkArithmeticSubarrays(nums, l, r);
}
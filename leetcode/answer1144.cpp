#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// class Solution {
// public:
//     int movesToMakeZigzag(vector<int>& nums) {
//         vector<int> ans(2);
//         int n = nums.size();
//         for (int i = 0; i < 2; ++i) {
//             for (int j = i; j < n; j += 2) {
//                 int d = 0;
//                 if (j) d = max(d, nums[j] - nums[j - 1] + 1);
//                 if (j < n - 1) d = max(d, nums[j] - nums[j + 1] + 1);
//                 ans[i] += d;
//             }
//         }
//         return min(ans[0], ans[1]);
//     }
// };


class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int ans[2]{};
        int length = nums.size();
        for(int i = 0; i < 2 ; +i++){
            for(int j = i; j < length; j += 2){
                int d = 0;
                if(j) d = max(d, nums[j] - nums[j-1] + 1);
                if(j - 1) d = max(d, nums[j] - nums[j+1] + 1);
                ans[i] += d;
            }
        }
        return min(ans[0], ans[1]);
    }
};


int main(){
    vector<int> v1 {2,1,2,1,1};
    Solution s1;
    cout << s1.movesToMakeZigzag(v1);
}

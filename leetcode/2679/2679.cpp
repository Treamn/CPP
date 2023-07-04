#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum = 0;
        int length = nums.size();
        int height = nums[0].size();

        for(int i = 0; i < length; i++){
            sort(nums[i].begin(), nums[i].end());
        }

        for(int i = 0; i < height; i++){
            int mx = 0;
            for(int j = 0; j < length; j++){
                mx = std::max(mx, nums[j][i]);
            }
            // cout << mx << endl;
            sum += mx;
        }
        return sum;
    }
};



int main(){
    vector<vector<int>> vec{{7,2,1},{6,4,2},{6,5,3},{3,2,1}};
    // vector<vector<int>> vec{{1}};
    Solution s1;
    cout << s1.matrixSum(vec);
}
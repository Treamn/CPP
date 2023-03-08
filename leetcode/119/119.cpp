#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp(rowIndex+1);
        if(rowIndex+1 >= 1){
            dp[0].emplace_back(1);
        }
        if(rowIndex+1 >= 2){
            dp[1].emplace_back(1);
            dp[1].emplace_back(1);
        }

        for(int i = 2; i < rowIndex+1; i++){
            dp[i].emplace_back(1);
            for(int j = 1; j < i; j++){
                dp[i].emplace_back(dp[i-1][j] + dp[i-1][j-1]);
            }
            dp[i].emplace_back(1);
        }

        vector<int> ans{dp[rowIndex]};
        for(auto &x : ans){
            cout << x << ' ';
        }
        return ans;
    }
};

int main(){
    Solution s1;
    s1.getRow(0);
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int height = rowSum.size(), width = colSum.size();
        vector<vector<int>> ans(height, vector<int>(width, 0));

        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                int x = min(rowSum[i], colSum[j]);
                ans[i][j] = x;
                rowSum[i] -= x;
                colSum[j] -= x;
            }
        }

        for(auto x : ans){
            for(auto &y : x){
                cout << y << ' ';
            }
            cout << endl;
        }
        return ans;
    }
};

int main(){
    vector<int> row{5,7,10};
    vector<int> col{8,6,8};
    Solution s1;
    s1.restoreMatrix(row, col);
}
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int length = grid.size();
        vector<vector<int>> ans(length - 2, vector<int>(length -2 ,0));
        // vector<vector<int>> ans;

        for(int i = 0; i < (length -2); ++i){
            for(int j = 0; j < (length - 2); ++j){
                int mx = 0;
                for(int k = i; k <= (i + 2); ++k){
                    for(int v = j; v <= (j + 2); ++v){
                        // cout << grid[k][v] << ' ';
                        ans[i][j] = max(grid[k][v], ans[i][j]);
                        // mx = max(grid[k][v], mx);
                    }
                    // cout << endl;
                }
                // cout << endl;
                // cout << mx << endl;
                // ans[i].push_back(mx);
            }
        }

        for(auto x : ans){
            for(auto y : x){
                cout << y << ' ';
            }
            cout << endl;
        }
        return ans;
    }
};


int main(){
    vector<vector<int>> v1{{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
    Solution s1;
    s1.largestLocal(v1);
}
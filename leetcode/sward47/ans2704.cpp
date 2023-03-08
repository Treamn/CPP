#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int x = grid.size(), y = grid[0].size();
        vector<vector<int>> f(x+1, vector<int>(y+1, 0));
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                // cout << max(f[i-1][j], f[i][j-1]) << endl;
                // cout << grid[i-1][j-1] << endl;
                f[i][j] = max(f[i-1][j], f[i][j-1]) + grid[i-1][j-1];
            }
        }

        for(auto &i : f){
            for(auto &j : i){
                cout << j << ' ';
            }
            cout << endl;
        }
        return f[x][y];
    }
};


int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    Solution s1;
    cout << s1.maxValue(vec);
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> max_value(m+1, vector<int>(n+1, 0));

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                max_value[i][j] = max(max_value[i-1][j], max_value[i][j-1]) + grid[i-1][j-1];
            }
        }
        return max_value[m][n];
    }
};


int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    Solution s1;
    cout << s1.maxValue(vec);
}
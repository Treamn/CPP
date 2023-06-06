#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        int flag = 1;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                for(int k = 0; k < grid.size(); k++){
                    if(grid[i][k] != grid[k][j]){
                        // flag++;
                        flag = 0;
                        break;
                    }
                }
                // if(flag == grid.size()){
                //     ans++;
                // }
                ans += flag;
                flag = 1;
            }
        }
        return ans;
    }
};


int main(){
    Solution s1;
    vector<vector<int>> a1{{3,2,1},{1,7,6},{2,7,7}};
    vector<vector<int>> a2{{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    cout << s1.equalPairs(a2);
}
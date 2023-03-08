#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int sum = grid[0][0];
        cout << sum << ' ';
        int i = 0, j = 0;
        int x = grid.size(), y = grid[0].size();

        while (i < x || j < y)
        {
            if(i < x - 1 && j < y - 1){
                if(grid[i][j+1] > grid[i+1][j]){
                    sum += grid[i][j+1];
                    cout << grid[i][j+1] << ' ';
                    j++;
                }else{
                    sum += grid[i+1][j];
                    cout << grid[i+1][j] << ' ';
                    i++;
                }
            // }else if( i == x-1 && j == y-1){
            //     sum += grid[i][j];
            //     cout << grid[i][j];
            //     break;
            }else if(i == x-1 && j < y){
                sum += grid[i][j];
                j++;
                cout << grid[i][j] << ' ';
            }else if(i < x && j == y-1){
                sum += grid[i][j];
                i++;
                cout << grid[i][j] << ' ';
            }
        }
        return sum;
    }
};


int main(){
    vector<vector<int>> vec{{1,3,1},{1,5,1},{4,2,1}};
    Solution s1;
    cout << s1.maxValue(vec);
}

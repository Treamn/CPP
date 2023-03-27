#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        vector< vector<int> > ans(r, vector<int>(c));
        vector<int> temp;

        if(m * n != r * c){
            return mat;
        }

        for(auto &x : mat){
            for(auto &y : x){
                temp.emplace_back(y);
            }
        }

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                ans[i][j] = temp[i*c + j];
            }
        }

        // for(auto &x : ans){
        //     for(auto &y : x){
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }

        return ans;
    }
};

int main(){
    vector<vector<int>> mat{{1,2},{3,4}};
    Solution s1;
    s1.matrixReshape(mat,4,1);
}
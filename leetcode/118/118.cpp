#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec(numRows);
        if(numRows >= 1){
            vec[0].emplace_back(1);
        }
        if(numRows >= 2){
            vec[1].push_back(1);
            vec[1].push_back(1);
        }

        for(int i = 2; i < numRows; i++){
            vec[i].emplace_back(1);
            for(int j = 1; j < i; j++){
                vec[i].emplace_back(vec[i-1][j] + vec[i-1][j-1]);
            }
            vec[i].emplace_back(1);
        }
        for(auto &x : vec){
            for(auto &y : x){
                cout << y << ' ';
            }
            cout << endl;
        }
        return vec;
    }
};

int main(){
    Solution s1;
    s1.generate(2);
}


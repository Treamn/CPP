#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int length = blocks.size();
        int ans = 0;
        vector<int> B_nums;

        for(int i = 0; i <= length-k; i++){
            int sum_B = 0;
            for(int j = i; j < k+i; j++){
                if(blocks[j] == 'W'){
                    sum_B++;
                }
            }
            B_nums.emplace_back(sum_B);
        }

        int min_value = INT8_MAX;
        for(auto &x : B_nums){
            // cout << x << ' ';
            min_value = min(min_value, x);
        }
        return min_value;

     }
};



int main(){
    string str = "WBWBBBW";
    Solution s1;
    cout << s1.minimumRecolors(str, 2);
}
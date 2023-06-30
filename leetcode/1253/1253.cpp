#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int sum = 0;
        int length = colsum.size();
        int two = 0;
        vector<vector<int>> ans(2, vector<int>(length));
        for(auto& x : colsum){
            if(x == 2){
                two++;
            }
            sum += x;
        }
        if((upper + lower) != sum || min(upper, lower) < two){
            return ans;
        }

        


        for(int i = 0; i < length; i++){
            if(colsum[i] == 2){
                ans[0][i] = 1;
                ans[1][i] = 1;
                upper--;
                lower--;
            }else if(colsum[i] == 0){
                ans[0][i] = 0;
                ans[1][i] = 0;
            }
        }

        for(int i = 0; i < length; i++){
            if(colsum[i] == 1){
                if(upper != 0){
                    ans[0][i] = 1;
                    upper--;
                }else{
                    ans[1][i] = 1;
                }
            }
        }
        return ans;
    }
};
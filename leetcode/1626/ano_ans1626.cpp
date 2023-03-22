#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int length = scores.size();
        vector<pair<int, int>> tab(length);
        for(int i = 0; i < length; i++){
            tab[i] = make_pair(ages[i], scores[i]);
        }
        sort(tab.begin(), tab.end());      

        // for(int i = 0; i < length; i++){ 
        //     cout << tab[i].first << " " << tab[i].second << endl;
        // }  

        vector<int> dp(length, 0);
        int res = 0;

        for(int i = 0; i < length; i++){
            for(int j = 0; j < i; j++){
                if(tab[j].second <= tab[i].second){
                    dp[i] = max(dp[i], dp[j]);
                }
            }
            dp[i] += tab[i].second;
            res = max(res, dp[i]);
        }
        return res;

    }
};



int main(){
    vector<int> score{4,5,6,5};
    vector<int> age{2,1,2,1};
    Solution s1;
    cout << s1.bestTeamScore(score, age);
}
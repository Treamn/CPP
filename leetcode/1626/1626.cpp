#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>> tab;
        for(int i = 0; i < scores.size(); i++){
            tab.emplace_back(make_pair(ages[i], scores[i]));
        }

        int age = tab[0].first, score = tab[0].second;
        int ans = 0;
        for(int i = 0; i < tab.size(); i++){
            // cout << tab[i].first << " " << tab[i].second << endl;
            if(age < tab[i].first && score > tab[i].second){
                
            }else if(age > tab[i].first && score < tab[i].second){
                
            }
        }
    }
};




int main(){
    vector<int> score{4,5,6,5};
    vector<int> age{2,1,2,1};
    Solution s1;
    s1.bestTeamScore(score, age);
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        int ans = 0;
        //如果k与n相等，则直接对reward1进行求和
        // if(k == n){
        //     for(auto &x: reward1){
        //         ans += x;
        //     }
        //     return ans;
        // }

        // vector<int> temp;
        for(int i = 0; i < k; i++){
            // int temp = max_element(reward1.begin(), reward1.end()) - reward1.begin();
            int temp = max(reward1, reward2);
            ans += reward1[temp];
            cout << temp << " " << reward1[temp] << endl;
            reward1.erase(reward1.begin() + temp);
            reward2.erase(reward2.begin() + temp);
            
            

            // for(auto &x : reward1){
            //     cout << x << " ";
            // }
            // cout << endl;
            // for(auto &x : reward2){
            //     cout << x << " ";
            // }
            // cout << endl;
            // break;
        }

        for(int i = 0; i < (n-k); i++){
            int temp = max_element(reward2.begin(), reward2.end()) - reward2.begin();
            ans += reward2[temp];
            cout << temp << " " << reward2[temp] << endl;
            reward1.erase(reward1.begin() + temp);
            reward2.erase(reward2.begin() + temp);
            
        }
        return ans;


    }

    int max(vector<int>& reward1, vector<int>& reward2){
        int x = 0;
        int max = reward1[0];
        for(int i = 1; i < reward1.size(); i++){
            if(reward1[i] > max){
                x = i;
                max = reward1[i];
            }else if(max == reward1[i]){
                if(reward2[x] > reward2[i]){
                    x = i;
                }
            }
        }
        return x;
    }
};





int main(){
    Solution s1;
    vector<int> reward1{4,1,5,3,3};
    vector<int> reward2{3,4,4,5,2};
    cout << s1.miceAndCheese(reward1, reward2, 3);
    // s1.miceAndCheese(reward1, reward2, 2);
}
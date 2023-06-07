#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            ans += reward2[i];
            reward1[i] -= reward2[i];
        }

        for(auto &x : reward1){
            cout << x << " ";
        }
        cout << endl;

        sort(reward1.rbegin(), reward1.rend());

        for(auto &x : reward1){
            cout << x << " ";
        }
        cout << endl;

        ans += accumulate(reward1.begin(), reward1.begin()+k, 0);
        return ans;
    }
};


int main(){
    Solution s1;
    vector<int> reward1{4,1,5,3,3};
    vector<int> reward2{3,4,4,5,2};
    cout << s1.miceAndCheese(reward1, reward2, 3);
    // s1.miceAndCheese(reward1, reward2, 2);
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;

        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i+1; j < prices.size(); j++){
                int temp = prices[j] - prices[i];
                // cout << i << " " << j << " " << temp << endl;
                mp = max(mp, temp);
            }
        }
        return mp;
    }
};

int main(){
    vector<int> vec{7,6,4,3,1};
    Solution s1;
    cout << s1.maxProfit(vec);
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int minPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            mp = max(mp, prices[i]-minPrice);
        }
        return mp;
    }
};

int main(){
    vector<int> vec{7,1,5,3,6,4};
    Solution s1;
    cout << s1.maxProfit(vec);
}
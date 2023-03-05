#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int ans = -1;
        int mx = 0, t = 0;
        int wait = 0, i = 0;
        while (wait || i < customers.size()) {
            wait += i < customers.size() ? customers[i] : 0;
            int up = min(4, wait);
            wait -= up;
            ++i;
            t += up * boardingCost - runningCost;
            if (t > mx) {
                t = mx;
                ans = i;
            }
        }
        return ans;
    }
};


int main(){
    vector<int> v1{10,9,6};
    int boardingCost = 6, runningCost = 4;
    Solution s1;
    cout << s1.minOperationsMaxProfit(v1, boardingCost, runningCost);
    return 0;
}
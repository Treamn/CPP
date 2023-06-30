#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int dp0 = arr[0], dp1 = 0, res = arr[0];

        for(int i = 1; i < arr.size(); i++){
            dp1 = max(dp0, dp1 + arr[i]);
            dp0 = max(dp0, 0) + arr[i];
            res = max(res, max(dp0, dp1));
        }
        return res;
    }
};


int main(){
    Solution s1;
    vector<int> v{1,-2,0,3};
    cout << s1.maximumSum(v);

}
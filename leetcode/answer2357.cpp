#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool status[101]{};
        int ans = 0;
        status[0] = true;
        for(auto x : nums){
            if(!status[x]){
                ans++;
                status[x] = true;
            }
        }
        return ans;
        
    }
};



int main(){
    vector<int> v1 {1,1,1,2,2,3,3};
    Solution s1;
    cout << s1.minimumOperations(v1);
}
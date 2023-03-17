#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum(n+1);

        for(int i = 0; i < n; i++){
            sum[i+1] = sum[i] + nums[i]; 
        }

        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < i; j++){
                if(sum[i] - sum[j] == k){
                    ans++;
                }
            }
        }
        return ans;
    }
};


int main(){
    vector<int> v1{1,1,1};
    Solution s1;
    cout << s1.subarraySum(v1,2);
}



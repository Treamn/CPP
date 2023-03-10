#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        // int sum = 0;
        int length = nums.size();
        int delete_num = length, s[length+1];

        s[0] = 0;
        for(int i = 0; i < length; i++){
            s[i+1] = (s[i] + nums[i]) % p;
        }
        int x = s[length];
        if(x == 0) return 0;

        unordered_map<int, int> last;
        for(int i = 0; i <= length; i++){
            last[s[i]] = i;
            auto it = last.find((s[i] - x + p) % p);
            if(it != last.end()){
                delete_num = min(delete_num, i - it->second);
            }
        }
        return delete_num < length ? delete_num : -1;
    }
};

int main(){
    vector<int> v1{6,3,5,2};
    Solution s1;
    cout << s1.minSubarray(v1, 9);
}
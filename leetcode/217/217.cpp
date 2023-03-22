#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int n = nums.size();
        unordered_map<int,int> map;
        for(auto &x : nums){
            map[x]++;
        }
        for(auto &x : nums){
            if(map[x] >= 2){
                return true;
            }
        }
        return false;
    }
};

int main(){
    vector<int> vec{1,2,3,4};
    Solution s1;
    cout << s1.containsDuplicate(vec);
}
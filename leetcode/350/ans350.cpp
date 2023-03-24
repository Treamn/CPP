#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mmap;
        vector<int> ans;

        for(auto &x : nums1){
            mmap[x]++;
        }

        for(auto &x : nums2){
            if(mmap.count(x)){
                ans.emplace_back(x);
                mmap[x]--;
                if(mmap[x] == 0){
                    mmap.erase(x);
                }
            }
        }

        
        for(const auto &x : ans){
            cout << x << " ";
        }
        return ans;


        // for(auto &x  : mmap){
        //     cout << x.first << " " << x.second << endl;
        // }
    }
};

int main(){
    vector<int> v1{1,2,2,1};
    vector<int> v2{2};
    Solution s1;
    s1.intersect(v1, v2);
}
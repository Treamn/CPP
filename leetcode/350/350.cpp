#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        multimap<int,int> status;
        // if(nums1.size() < nums2.size()){
        //     for(const auto &x : nums1){
        //         for(const auto &y : nums2){
        //             if(x == y){
        //                 ans.emplace_back(x);
        //                 break;
        //             }
        //         }
        //     }
        // }else{
        //     for(const auto &x : nums2){
        //         for(const auto &y : nums1){
        //             if(x == y){
        //                 ans.emplace_back(x);
        //                 break;
        //             }
        //         }
        //     }
        // }

        for(const auto &x : ans){
            cout << x << " ";
        }
        return ans;
    }
};



int main(){
    vector<int> v1{1,2,2,1};
    vector<int> v2{2};
    Solution s1;
    s1.intersect(v1, v2);
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if( m == 0){
        //     nums1 = nums2;
        // }else if(n == 0){
        //     nums1;
        // }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m+n; j++){
                if(nums1[j] == 0){
                    nums1[j] = nums2[i];
                    // cout << "jiji";
                    break;
                }
            }
        }
        sort(nums1.begin(), nums1.end());

        for(const auto &x : nums1){
            cout << x << " ";
        }
    }
};

int main(){
    vector<int> nums1{1};
    vector<int> nums2{};
    int m = 1, n = 0;
    Solution s1;
    s1.merge(nums1, m, nums2, n);
}
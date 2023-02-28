#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int length = nums.size();
        int sum = length;
        // cout << sum;
        int arr[length];

        for(int i = 0; i < length-1; i++){
            for(int j = i+1; j < length; j++){
                if(nums[i] != 0 && nums[j] != 0){
                    if(nums[i] == nums[j]){
                        sum--;
                        cout << "run it! " << nums[i] << ' '<< nums[j] << endl;
                    }
                }
            }
        }
        for(auto x : nums){
            if(x == 0){
                sum--;
            }
        }

        return sum;
        
    }
};



int main(){
    vector<int> v1 {1,1,1,2,2,3,3};
    Solution s1;
    cout << s1.minimumOperations(v1);
}
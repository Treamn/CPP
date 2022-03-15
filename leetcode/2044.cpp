#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max = 0;
        for(auto n : nums) max |= n;

        int sum = 0;
        for(int i = 1; i < (1 << nums.size()); i++){
            int cur = 0;
            for(int j = 0; j < nums.size(); j++){
                if(i & (1 << j)){
                    // cur |= nums[j];
                    bitset<8>jb(1 << j);
                    bitset<8>ib(i);
                    int number = (i & (1 << j));
                    bitset<8>bs(number);
                    // cout << j << "  " << i << "  " << number << endl;
                    // cout << jb << "   " << ib << "  " << bs ;
                    cout << i << "  " << j << " ";
                    // cout << bs;
                }
                // else{
                //     cout << "this is zero" << endl;;
                // }
                // cout << endl;
            }
            cout << endl;
            if(cur == max){
                sum++;
            }
        }
        return sum;
    }
};


int main(){
    Solution ans;
    vector<int> nums = {3,2,1,5};
    // cout << ans.countMaxOrSubsets(nums);
    ans.countMaxOrSubsets(nums);
}
    

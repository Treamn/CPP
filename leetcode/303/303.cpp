#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> num;
public:
    NumArray(vector<int>& nums):num(nums) {

    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left; i <= right; i++){
            sum += num[i];
        }
        return sum;
    }
};
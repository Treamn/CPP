#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int length = arr.size();
        int i = 0, j = length - 1;
        while(i+1 < length && arr[i] <= arr[i+1]){
            i++;
        }
        while(j-1 > 0 && arr[j] >= arr[j-1]){
            j--;
        }

        if(i >= j){
            return 0;
        }

        int ans = min(length-1-i, j);

        for(int l = 0, r = j; l <= i; l++){
            while (r < length && arr[r] < arr[l])
            {
                r++;
            }
            ans = min(ans, r - l - 1);
        }
        return ans;
    }
};



int mian(){

}
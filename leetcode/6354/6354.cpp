#include <iostream>
using namespace std;

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int zheng = numOnes + numZeros;
        int all = zheng + numNegOnes;


        if(numOnes > k){
            return k;
        }else if(zheng > k){
            return numOnes;
        }else{
            return numOnes - (k-zheng);
        }
        
    }
};


int main(){
    Solution s1;
    cout << s1.kItemsWithMaximumSum(3,2,1,6);

}
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Solution {
public:
    int kthGrammar(int n, int k){
        if(n == 1)
            return 0;
        
        int length = pow(2, (n - 1));

        if(k > (length / 2)){
            int val = kthGrammar(n-1 , k - length/2);
            return val == 0 ? 1 : 0;
        }else{
            return kthGrammar(n-1, k);
        }
    }
};
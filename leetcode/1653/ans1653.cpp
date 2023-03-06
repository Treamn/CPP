#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int leftb = 0, righta = 0;

        for(auto x : s){
            if(x == 'a'){
                righta++;
            }
        } 
        // cout << righta;
        int res = righta;

        for(auto x : s){
            // cout  << x << endl;
            if(x == 'a'){
                righta--;
            }else{
                leftb++;
            }
            res = min(res, leftb + righta);
        }
        return res;
    }
};


int main(){
    string str("bbaaaaabb");
    Solution s1;
    cout << s1.minimumDeletions(str);
    return 0;
}
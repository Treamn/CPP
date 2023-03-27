#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans = 0;
        int m = s.size(), n = t.size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int diff = 0;
                for(int k = 0; i+k < m && j+k < n; k++){
                    diff += s[i+k] == t[j+k] ? 0 : 1;
                    if(diff == 1){
                        ans++;
                    }else if(diff > 1){
                        break;
                    }
                }
            }
        }

        return ans;
    }
};



int main(){
    string s{"ab"};
    string t{"bb"};
    // cout << s.substr(0,2);
    Solution s1;
    cout << s1.countSubstrings(s,t);
}
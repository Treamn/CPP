#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans = 0;
        if(s.size() == 1 || t.size() == 1){
            return ans;
        }

        // for(int i = 0; i < s.size(); i++){
        //     for(int j = 0; j < t.size(); j++){
        //         if(s[i] != t[j]){
        //             ans++;
        //         }
        //     }
        // }

        for(int i = 1 ; i <= s.size(); i++){
            for(int j = 0; j + i < s.size(); j++){
                string subj = s.substr(j,i);
                for(int k = 0; k + i < t.size(); k++){
                    string subk = t.substr(k,1);    

                    int status = 0;
                    for(int x = 0; x < i; x++){
                        if(subj[x] != subk[x]){
                            status++;
                        }
                    }
                    if(status == 1){
                        ans++;
                    }   
                    status = 0;
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
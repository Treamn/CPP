#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        int length = a.size();
        string ap,as,bp,bs;
        vector<bool> ans;
        bool status;

        for(int i = 0; i <= length; i++){
            if(i == 0){
                ap = "", as = a;
                bp = "", bs = b;
            }else if(i == length){
                ap = a, as = "";
                bp = b, bs = "";
            }else{
                ap = a.substr(0,i), as = a.substr(i,length-1);
                bp = b.substr(0,i), bs = b.substr(i,length-1);
            }

            string str = ap + bs;
            for(int j = 0; j < str.size()/2; j++){
                if(str[j] == str[str.size()-1-j]){
                    status = true;
                }else{
                    status = false;
                    break;
                }
            }
            ans.emplace_back(status);
        }
        bool reans = false;
        for(auto x : ans){
            if(x){
                reans = true;
                break;
                }
        }
        return reans;
    }
};




int main(){
    string a{"abdef"};
    string b{"fecab"};
    Solution s1;
    cout << s1.checkPalindromeFormation(a,b);
}
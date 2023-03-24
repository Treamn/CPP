#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        vector<string> str{"a","e","i","o","u"};
        int ans = 0;

        for(int i = left; i <= right; i++){
            int status = 0;
            auto t = words[i];
            for(const auto &x : str){
                if(t[0] == x){
                    status++;
                }
                if(t[t.size()-1] == x){
                    status++;
                }
            }
            if(status == 2){
                ans++;
            }
            status = 0;
        }
        return ans;
    }
};


int main(){
    
}
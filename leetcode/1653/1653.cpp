#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int length = s.size();
        vector<int> status;

        for(int i = 0; i < length; i ++){
            if(i >= 1 && i <= (length - 1)){
                if(s[i] == 'a'){
                    if(s[i - 1] == 'b' && s[i + 1] == 'b'){
                        status.push_back(i);
                    }
                    if(s[i - 1] == 'b' && s[i + 1] == 'a'){
                        status.push_back(i - 1);
                    }
                }

                if(s[i] == 'b'){
                    if(s[i - 1] == 'a' && s[i + 1] == 'a'){
                        status.push_back(i);
                    }
                    if(s[i - 1] == 'b' && s[i + 1] == 'a'){
                        status.push_back(i + 1);
                    }
                }
            }else if(i < 1){
                if(s[i] == 'b'){
                    status.push_back(i);
                }
            }else{
                if(s[i] == 'a'){
                    status.push_back(i);
                }
            }
        }

        for(auto x : status){
            cout << x << ' ';
        }
    }
};


int main(){
    string str("bbaaaaabb");
    Solution s1;
    s1.minimumDeletions(str);
}
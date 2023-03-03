#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        int length = names.size();
        vector<string> ans(names);
        // ans.push_back(names[0]);


        for(int i = 1; i < length; i++){
            int status = 0;
            for(int j = 0; j < length; j++){
                if(i != j){
                    if(names[i] == ans[j]){
                        status++;
                    }
                    if(status != 0){
                        if(ans[j] == names[i] + '(' + to_string(status) + ')'){
                            status++;
                    }
                    }
                    
                }else{
                    break;
                }
            }

            if(status == 0){
                ans[i] = names[i];
            }else{
                ans[i] = names[i] + '(' + to_string(status) + ')';
            }
        }

        for(auto x : ans){
            cout << x << endl;
        }

        return ans;
    }
};


int main(){
    vector<string> v1{"kingston(0)","kingston","kingston"};
    Solution s1;
    s1.getFolderNames(v1);
    return 0;
}
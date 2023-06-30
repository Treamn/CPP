#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> res;
        string result;
        stringstream input(sentence);
        while(input >> result){
            res.push_back(result);
        }
        // cout << res[1][res[1].size()-1];        
        for(int i = 0; i < res.size(); i++){
            if(i == res.size()-1){
                if(res[i][res[i].size()-1] != res[0][0]){
                    // cout << "false0" << endl;
                    return false;
                }
            }else{
                if(res[i][res[i].size()-1] != res[i+1][0]){
                // cout << "false1" << endl;
                return false;
            }
            }
        }
        return true;
    }
};


int main(){
    string test{"eetcode"};
    Solution s1;
    cout << s1.isCircularSentence(test);
    return 0;
}

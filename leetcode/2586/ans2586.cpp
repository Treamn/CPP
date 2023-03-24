#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;


class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        set<char> c{'a','e','i','o','u'};

        for(int i = left; i <= right; i++){
            auto t = words[i];
            // if(c.count(t[0]) && c.count(t[t.size()-1])){
            //     ans++;
            // }
            ans += (c.count(t[0]) + c.count(t[t.size()-1])) == 2;
        }
        return ans;
    }
};

int main(){
    vector<string> words{"hey","aeo","mu","ooo","artro"};
    Solution s1;
    cout << s1.vowelStrings(words,1,4);
}
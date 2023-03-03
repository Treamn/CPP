#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> d;
        for (auto& name : names) {
            int k = d[name];
            if (k) {
                while (d[name + "(" + to_string(k) + ")"]) {
                    k++;
                }
                d[name] = k;
                name += "(" + to_string(k) + ")";
            }
            d[name] = 1;
        }
        return names;
    }
};

int main(){
    vector<string> v1{"kingston(0)","kingston","kingston"};
    Solution s1;
    s1.getFolderNames(v1);
    return 0;
}

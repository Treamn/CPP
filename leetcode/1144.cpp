// leetcode1144自己写的解法,但是有错误,具体思路如下:将相邻两个元素的差值保存在 一个数组中.首先判断数组元素是否为奇数索引位为正及偶数索引位为负,或反之,此类情况不用计算,直接 返回0.如果不是上述情况则进行计算.分别按照将奇数索引位设置为正(若为正则不进行操作,否则将值计算至1),偶数索引位设置为负(若为负则不进行操作,否则将值计算至-1)，并计算此类的计算量.并计算奇数摄卫负,偶数设为正时的计算将,比较并输出较小值即可

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int length = nums.size()-1;
        int cha[length]; //存储相邻两个元素之间的差值
        bool status;

        for(int i = 1; i < length -2; i++){
            if((nums[i]-1 < nums[i]) && (nums[i] > nums[i+1])){
                cout << "中间大: " << ' '<< nums[i-1] << ' '<< nums[i] << ' '<< nums[i+1] << endl;
                status = true;
            }else if((nums[i]-1 > nums[i]) && (nums[i] < nums[i+1])){
                cout << "中间小" << ' '<< nums[i-1] << ' '<< nums[i] << ' '<< nums[i+1] << endl;
                status = true;
            }else{
                status = false;
                break;
            }
        }

        for(int i = 0; i < length; i++){
            cha[i] = nums[i] - nums[i+1];
        }

        // for(auto x : cha){
        //     cout << x << endl;
        // }

        // //判断是否需要计算
        // bool status;
        // for(int i = 1; i < length-1; i++){
        //     if(cha[i-1] < 0 && cha[i] > 0){
        //         cout << "cha[i-1] < 0 && cha[i] > 0" << endl;
        //         status = true;
        //     }else if(cha[i-1] > 0 && cha[i] < 0){
        //         cout << "cha[i-1] > 0 && cha[i]" << endl;
        //         status = true;
        //     }else{
        //         status = false;
        //         break;
        //     }
        // }
        // cout << status << endl;

        int sum0 = 0;
        for(int i = 0; i < length; i++){
            if(i < (length -1)){
                if(i % 2 == 0){
                    if(cha[i] > 0){
                        sum0 += cha[i] + 1;
                        cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
                else{
                    if(cha[i] < 0){
                        sum0 += abs(cha[i] - 1);
                        cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
            }else{
                if(i % 2 == 0){
                    if(cha[i] > 0){
                        sum0 += cha[i] + 1;
                        // cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
                else{
                    if(cha[i] < 0){
                        sum0 += abs(cha[i] - 1);
                        // cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
            }
        }
        // cout << "sum0:" << sum0 << endl;

        int sum1 = 0;
        for(int i = 0; i < length; i++){
            if(i < (length -1)){
                if(i % 2 == 1){
                    if(cha[i] > 0){
                        sum1 += cha[i] + 1;
                        cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
                else{
                    if(cha[i] < 0){
                        sum1 += abs(cha[i] - 1);
                        cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
            }else{
                if(i % 2 == 1){
                    if(cha[i] > 0){
                        sum1 += cha[i] + 1;
                        // cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
                else{
                    if(cha[i] < 0){
                        sum1 += abs(cha[i] - 1);
                        // cha[i+1] = cha[i+1] - abs(cha[i] + 1);
                    }
                }
            }
        }
        // cout << "sum1:" << sum1 << endl;

        int min = 0;
        if(sum0 == sum1){
            min = sum0;
        }else{
            min = sum0 < sum1 ? sum0 : sum1;
        }
        // cout << min;
        // return min;
        if(status){
            return 0;
        }else{
            return min;
        }

    }
};


int main(){
    vector<int> v1 {2,1,2,1,2};
    Solution s1;
    cout << s1.movesToMakeZigzag(v1);
    // s1.movesToMakeZigzag(v1);

}
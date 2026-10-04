#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = 0;
        int maxSize = 0;
        int delZero = 0;

        while(j < n) {
            if(nums[j] == 1) {
                j++;
            }
            else if(nums[j] == 0 && delZero == 0) {
                delZero++;
                j++;
            }
             else {
                if(nums[i] == 0) {
                    delZero--;
                }
                i++;
            }
            
            maxSize = max(maxSize,j - i - 1);
        }
        return maxSize;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        int j = 0;
        int maxWindow = 0;
        int numZeroes = 0;
        while(j < n) {
            if(nums[j] == 1) {
                j++;
            }
            else if(nums[j] == 0 && numZeroes < k) {
                j++;
                numZeroes++;
            } 
            else {
                if(nums[i] == 0) {
                    numZeroes--;
                }
                i++;
            }
            maxWindow = max(maxWindow,j - i);
        }

        return maxWindow;
    }
};
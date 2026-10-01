#include<bits/stdc++.h>
using namespace std;
/*
Toh basically hum 2 variables le lenge first and second.
Ab hum array ke elements ko traverse karenge.
phir hum check karenge ki agar current element first se chhota ya equal hai toh first ko update karenge.
Agar current element second se chhota ya equal hai toh second ko update karenge.
phir agar current element first aur second dono se bada hai toh iska matlab hai ki humne increasing triplet subsequence find kar liya hai.
Yahi idea hai is problem ka.
*/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(nums[i] <= first) {
                first = nums[i];
            } else if(nums[i] <= second) {
                second = nums[i];
            } else {
                return true;
            }
        }

        return false;
    }
};
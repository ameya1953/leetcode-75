#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // Solving by two pointer approach
        int i = 0;
        int j = 0;
        while(i < n) {
            if(nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        while(j < n) {
            nums[j] = 0;
            j++;
        }
    }
};
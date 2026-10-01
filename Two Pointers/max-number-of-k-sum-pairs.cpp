#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        // sorting karna hii padega phir hii two pointer lagega i guess
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = n - 1;
        int maxOps = 0;
        while(i < j) {
            if(nums[j] == k - nums[i]) {
                maxOps++;
                i++;
                j--;
            } else if(nums[i] + nums[j] < k) {
                i++;
            } else {
                j--;
            }

        }
        return maxOps;
    }
};
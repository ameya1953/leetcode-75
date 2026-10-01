#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        int j = k;

        // First avg
        double sum = 0;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double maxVal = sum;

        while(j < n) {
            sum = sum - nums[i] + nums[j];
            maxVal = max(maxVal,sum);
            j++;
            i++;
        }

        return maxVal / k;
    }
};
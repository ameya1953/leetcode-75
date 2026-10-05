#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long sum = 0;
        for(int i : nums) {
            sum += i;
        }
        
        int i = 0;
        long long prefixSum = 0;
        while(i < nums.size()) {
            sum -= nums[i];
            if(sum == prefixSum) {
                return i;
            }
            
            prefixSum += nums[i];
            i++;
        }

        return -1;
    }
};
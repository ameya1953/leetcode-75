#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        vector<int> arr = candies;
        sort(arr.begin(), arr.end());
        int maxVal = arr[arr.size() - 1];
        for(int i = 0; i < candies.size(); i++) {
            ans.push_back(candies[i] + extraCandies >= maxVal);
        }

        return ans;
    }
};
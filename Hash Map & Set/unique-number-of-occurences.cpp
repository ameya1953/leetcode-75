#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> freq;

        for(int i : arr) {
            freq[i]++;
        }

        vector<int> nums1;
        for(auto& i : freq) {
            nums1.push_back(i.second);
        }

        unordered_set<int> nums2(nums1.begin(),nums1.end());

        return nums2.size() == nums1.size();
    }
};
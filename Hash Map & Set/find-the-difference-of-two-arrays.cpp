#include<bits/stdc++.h>
#include <set>
using namespace std;

// This solution passed in Leetcode but was giving error because .contains() is not available in C++14. 
// It is available in C++20.

/*
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        vector<int>left;
        vector<int> right;

        for(int i : s1) {
            if(s2.contains(i)) {
                continue;
            } 
            left.push_back(i);
        }

        for(int i : s2) {
            if(s1.contains(i)) {
                continue;
            } 
            right.push_back(i);
        }

        vector<vector<int>> ans;

        ans.push_back(left);
        ans.push_back(right);

        return ans;
    }
};
*/

// This too passed in Leetcode.
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        vector<int>left;
        vector<int> right;

        for(int i : s1) {
            auto it = s2.find(i);
            if(it != s2.end()) {
                continue;
            } 
            left.push_back(i);
        }

        for(int i : s2) {
            auto it = s1.find(i);
            if(it != s1.end()) {  // If 'it' has not reached the end means an element matching to s2 has been found in s1
                continue;
            } 
            right.push_back(i);
        }

        vector<vector<int>> ans;

        ans.push_back(left);
        ans.push_back(right);

        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<int,int> freq1;
        map<int,int> freq2;

        for(char i : word1) {
            freq1[i]++;
        }

        for(char i : word2) {
            freq2[i]++;
        }

        vector<int> count1;
        vector<int> count2;

        for(auto& i : freq1) {
            count1.push_back(i.second);
        }
        sort(count1.begin(),count1.end());

        for(auto& i : freq2) {
            count2.push_back(i.second);
        }
        sort(count2.begin(),count2.end());

        for(auto& i : freq1) {
            if(freq2.contains(i.first)) continue;
            else return false;
        }
        if(count1 == count2) return true;

        return false;
    }
};
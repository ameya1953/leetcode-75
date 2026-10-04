#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currGain = 0;
        int maxGain = 0;

        for(int i = 0; i < gain.size(); i++) {
            currGain += gain[i];
            maxGain = max(maxGain, currGain);
        }

        return maxGain;
    }
};
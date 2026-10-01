#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();

        int i = 0;
        int k = 0;

        while(i < t.size()) {
            if(s[k] == t[i]) {
                k++;
            }
            i++;
        }
        return k == s.size();
    }
};
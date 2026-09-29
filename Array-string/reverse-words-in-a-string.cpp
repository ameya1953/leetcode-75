#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> strArr;
        string word = "";
        for(int i = 0; i < n; i++) {
            
            if(s[i] != ' ') {
                word += s[i];
            } else {
                if(!word.empty()) {
                    strArr.push_back(word);
                    word = "";
                }     
            }
            
        }
        if(!word.empty()) {
            strArr.push_back(word);
        }
        reverse(strArr.begin(),strArr.end());
        string ans;
        for(int i = 0; i < strArr.size() - 1; i++) {
            ans += strArr[i] + " ";
        }

        return ans + strArr[strArr.size() - 1];

    }
};
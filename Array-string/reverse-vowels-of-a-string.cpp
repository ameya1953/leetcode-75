#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<char>vowelArr;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'A' || s[i] == 'a' ||s[i] == 'E' ||s[i] == 'e' ||s[i] == 'I' ||s[i] == 'i' ||s[i] == 'O' ||s[i] == 'o' ||s[i] == 'U' ||s[i] == 'u') {
                vowelArr.push_back(s[i]);
            }
        }
        reverse(vowelArr.begin(),vowelArr.end());
        int i = 0;
        int j = 0;
        while(i < n && j < vowelArr.size()) {
            
            if(s[i] == 'A' || s[i] == 'a' ||s[i] == 'E' ||s[i] == 'e' ||s[i] == 'I' ||s[i] == 'i' ||s[i] == 'O' ||s[i] == 'o' ||s[i] == 'U' ||s[i] == 'u') {
                s[i] = vowelArr[j++];
            }
            i++;
        }
        return s;
    }
};
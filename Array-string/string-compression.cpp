#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 1;
        vector<int> countArr;
        vector<char> charArr;
        for(int i = 1; i < n; i++) {
            if(chars[i - 1] == chars[i]) {
                count++;
            } else {
                countArr.push_back(count);
                charArr.push_back(chars[i-1]);
                count = 1;
            }
        }
        countArr.push_back(count);
        charArr.push_back(chars[n - 1]);
      
        string s = "";
        int i = 0;
        int j = 0;
        while(i < charArr.size() && j < countArr.size()) {
            if(countArr[i] == 1) {
                s += charArr[i];
            } else {
                s += charArr[i];
                s += to_string(countArr[j]);
            }
            i++;
            j++;
        }
        // Storing the compressed string s in chars
        for(int i = 0; i < s.size(); i++) {
            chars[i] = s[i];
        }
        return s.size();
        
    }
};
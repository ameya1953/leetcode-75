#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string repeat_string(const string& str, int times) {
        string result;
        
        result.reserve(str.length() * times); 
        
        for (int i = 0; i < times; ++i) {
            result += str;
        }
        return result;
    }

    string gcdOfStrings(string str1, string str2) {
        
        int n = str2.size();
        int i = 0;
        string curr_gcd = "";
        string ans = "";
        while(i < n) {
            curr_gcd += str2[i];

            int times1 = str1.size() / curr_gcd.size();
            int times2 = str2.size() / curr_gcd.size();

            string s1 = repeat_string(curr_gcd,times1);
            string s2 = repeat_string(curr_gcd,times2);

            if(s1 != str1 || s2 != str2) {
                i++;
            } else {
                i++;
                ans = curr_gcd;
            }

        }
        return ans;
    }
};
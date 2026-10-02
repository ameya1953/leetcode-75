#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();

        int i = 0;
        int j = k;
        int maxVow = 0;

        for(int w = 0; w < k; w++) {
            if(s[w] == 'a'|| s[w] == 'e'|| s[w] == 'i'|| s[w] == 'o'|| s[w] == 'u') {
                maxVow++;
            }
        }
        int temp = maxVow;
        while(j < n) {
            
            if(s[j] == 'a'|| s[j] == 'e'|| s[j] == 'i'|| s[j] == 'o'|| s[j] == 'u') {
                temp++;
            } 
            if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u') {
                temp--;
            } 
            j++;
            i++;
            maxVow = max(maxVow,temp);
        }

        return maxVow;
    }
};
#include<bits/stdc++.h>
using namespace std;
/*
Idea:
Do pointer logic use karenge.
Ek pointer i ko 0 se start karenge aur ek pointer j ko n-1 se start karenge.
Phir hum dono pointer ke height ka minimum nikalenge aur usko (j-i) se multiply karenge aur maxVal me store karenge.
Phir hum check karenge ki agar height[i] chhota hai toh i ko increment karenge warna j ko decrement karenge.
Done phir!!
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int j = n - 1;
        int maxVal = 0;
        while(i < j) {
            int k = min(height[i],height[j]);
            maxVal = max(k * (j - i),maxVal);
            if(k == height[i]) {
                i++;;
            } else {
                j--;
            }
        }

        return maxVal;

    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        vector<int> arr(flowerbed.size() + 2);
    
        for(int i = 0; i < flowerbed.size(); i++) {
            arr[i + 1] = flowerbed[i];
        }

        for(int i = 1; i < arr.size() - 1; i++) {

            if(arr[i] == 0) {
                if(arr[i - 1] == 0 && arr[i + 1] == 0) {
                    arr[i] = 1;
                    if(count == n) break;
                    count++;
                    // if(count == n) break;
                }
            }
        }

        return count == n;
    }
};
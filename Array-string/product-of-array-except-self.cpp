/*
Idea behind the code:
Actually you can see in all the comments mentioning multiply left and right product of index. 
To be frank yes using that hint we can solve the problem but forming the code for it in order(n) 
just by that hint is difficult. 
I came to know how to implement this only by looking at the solution. 

1.firstly create an array of size n this array can be used as your output array tooo.
2.Now In this array you need to store product of left part of index that is if array is [1,2,3,4,5]
 the new_array must be [1,1,2,6,24] use a loop for this.
3.Now take another loop and iterate it from backwards this is because here we want to acquire 
the right product of index 
4.Now take a variable and initialize it with 1 and multiply it with the right product of index
5.Now multiply the value of this variable with the value of new_array[index] and store it.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftPdt;
        int temp1 = 1;
        for(int i = 0; i < n; i++) {
            leftPdt.push_back(temp1);
            temp1 *= nums[i];
        }

        vector<int> rightPdt;
        int temp2 = 1;
        for(int i = n - 1; i >= 0; i--) {
            rightPdt.push_back(temp2);
            temp2 *= nums[i];
        }
        reverse(rightPdt.begin(),rightPdt.end());

        vector<int>ans;
        int temp3 = 1;
        for(int i = 0; i < n; i++) {
            temp3 = leftPdt[i]*rightPdt[i];
            ans.push_back(temp3);
        }

        return ans;
    }
};
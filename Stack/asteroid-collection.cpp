#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int n = asteroids.size();

        stack<int> myStack;

        for(int i : asteroids) {
            bool alive = true;

            while(alive && i < 0 && !myStack.empty() && myStack.top() > 0) {
                if(myStack.top() < -i) {
                    myStack.pop();
                } 
                else if(myStack.top() == -i) {
                    myStack.pop();
                    alive = false;
                } else {
                    alive = false;
                }
            }

            if(alive) {
                myStack.push(i);
            }
        }

        vector<int> ans;
        while(!myStack.empty()) {
            ans.push_back(myStack.top());
            myStack.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
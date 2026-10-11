#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> myStack;

        for(char c : s) {
            myStack.push(c);
        }
        stack<char> herStack;
        int count = 0;
        while(!myStack.empty()) {
            if(myStack.top() == '*') {
                myStack.pop();
                if(myStack.top() == '*') {
                    count++;
                } else {
                    myStack.pop();
                }   
            } else if(count != 0) {
                myStack.pop();
                count--;
            } else {
                herStack.push(myStack.top());
                myStack.pop();
            }
        }
        string ans;
        while(!herStack.empty()) {
            ans += herStack.top();
            herStack.pop();
        }

        return ans;
    }
};
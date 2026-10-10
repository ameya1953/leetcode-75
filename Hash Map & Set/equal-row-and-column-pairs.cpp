#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> transposed(n, vector<int>(n));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                transposed[j][i] = grid[i][j];
            }
        }

        int count = 0;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < transposed.size(); j++) {
                if(grid[i] == transposed[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};
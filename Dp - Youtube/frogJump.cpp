#include<iostream>
#include<vector>
using namespace std;

int f(int index, vector<int> &heights, vector<int> &dp) {
    if(index == 0) return 0;

    if(dp[index] != -1) return dp[index];
 
    int left = f(index-1, heights, dp) + abs(heights[index] - heights[index-1]);
    int right = INT_MAX;
    if(index > 1) {
        right = f(index-2, heights, dp) + abs(heights[index] - heights[index-2]);
    }

    return dp[index] = min(left, right);
}

int frogJump(int n , vector<int> &heights) {

    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);

    // Recursive solution = Tabulation
    /*
    dp[0] = 0;
    for(int i=1; i<n; i++) {
        int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if( i > 1) {
         ss = dp[i-2] + abs(heights[i] - heights[i-2]);

         dp[i] = min(fs, ss);

        } 
        return dp[n-1];
    }
    */
}



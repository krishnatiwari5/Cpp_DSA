#include<iostream>
#include<vector>
using namespace std;

// in this question we have to find maximum non Adjacent Sum in a vector


// 1) approch memonization
int f(int ind, vector<int> nums, vector<int> &dp) {
    if(ind == 0) return nums[ind];
    if(ind < 0) return 0;

    if(dp[ind] != -1) return dp[ind];

    int pick = nums[ind] + f(ind-2, nums,dp);
    int notPick = 0 + f(ind -1, nums, dp);

    return dp[ind] = max(pick, notPick);
}


int maximumNonAdjacentSum(vector<int> nums) {
    int n= nums.size();
    vector<int> dp(n, -1);
    return f(n-1, nums, dp);
}


// 2) Tabulation code

int maximumNonAdjacentSum2 (int ind, vector<int> nums, vector<int> &dp) {
    int n= nums.size();
    
    dp[0] = nums[0];
    int neg =0; // when index is negative return 0

    for(int i=1; i<n; i++) {
        int take = nums[ind];
        if(i>1) {
            take += dp[i-2];
        }
        int nonTake = 0 + dp[i-1];

        dp[i] = max(take, nonTake);
    }
return dp[n-1];
}

// 3) Space Optimization


int maximumNonAdjacentSum3 (int ind, vector<int> nums) {
    int n= nums.size();
   
 int prev = nums[0];
    int prev2 =0; // when index is negative return 0

    for(int i=1; i<n; i++) {
        int take = nums[ind];
        if(i>1) {
            take += prev2;
        }
        int nonTake = 0 + prev;

        int curri = max(take, nonTake);
        prev2 = prev;
        prev = curri;
    }
  return prev;
}
#include<iostream>
#include<vector>
using namespace std;

// How to understang given problem is a dp problem
/* 
if the question asks 
-> Count the total No. of ways
-> if question can solve by multiply ways and  if question ask minimum output and maximum output
-> whenever th concept of Try all possible ways come or count the way or best way = that's when we try recursion
*/

// shortcut to solve DP problem
/*
1) Try to represent the problem in terms of index
2) Do all possible stuffs on that index according to the problem statement 
3) sum of all stuffs -> count all ways
   min ( of all stuffs) -> find min
   max (of all stuffs) -> find max
*/

// dp = dynamic programming consist of three major step
// 1) Memoization
// 2) Tabulation
// 3) Space optimization // not necessary but if do its great

int fibo(int n, vector<int> &dp) {
    if(n<=1) {
        return n;
    }
    if(dp[n] = ! -1)  {
        return dp[n];
    } 

    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);

}

int main() {
    int n; 
    cout<<"Enter the Number "<<endl;
    cin>>n;
//     vector<int> dp(n+1, -1);

//      cout<<fibo(n, dp)<<endl;

// more optimized (space optimized) code 

int prev2 = 0;
int prev1 = 1;
for(int i=2;i<=n; i++) {
    int curi = prev1 + prev2;
    prev2 = prev1;
    prev1 = curi;
}

cout<< prev1;

    return 0;
}
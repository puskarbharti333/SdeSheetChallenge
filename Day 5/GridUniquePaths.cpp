#include <bits/stdc++.h>
// DP approach
// int count(int m , int n, vector<vector<int>> &dp){
//     if(n == 1 || m == 1)
//         return dp[m][n] = 1;
    
//     if(dp[m][n] == 0) 
//         return dp[m][n] = count(m-1, n, dp) + count(m, n-1, dp);
//     else return dp[m][n];
// }

int uniquePaths(int m, int n) {
//     vector<vector<int>> dp( m + 1 , vector<int> (n + 1, 0));
    int N = m + n - 2;
    int R = n - 1;
    int ans = 1;
    
    for(int i = 1; i <= R; i++){
        ans = ans * ( N - R + i) / i; // Finding nCr (Combination)
    }
    
    return ans;
    
}
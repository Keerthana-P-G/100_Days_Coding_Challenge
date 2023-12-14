/*Given a fence with n posts and k colors, find out the number of ways of painting the fence so that not more than two consecutive posts have the same colors. Since the answer can be large return it modulo 109 + 7.

Example 1:

Input:
n = 3
k = 2 
Output: 6

Example 2:

Input:
n = 2
k = 4 
Output: 16
*/

class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        if(n == 1)
            return k;
            
        vector<vector<long long>> dp(n + 1, vector<long long> (2, 1));
        const long long mod = 1e9 + 7;
        
        for(int i = n - 1; i > 0; i--){
            dp[i][0] = (((k - 1) * dp[i + 1][0]) % mod + dp[i + 1][1]) % mod;
            
            dp[i][1] = ((k - 1) * dp[i + 1][0]) % mod;
        }
        
        return dp[0][0] = (k * dp[1][0]) % mod;
    }
};
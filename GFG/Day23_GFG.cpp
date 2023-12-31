*/Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 109 + 7.

Example 1:

Input:
N = 3
Output: 5
Explanation:
5 strings are (000,
001, 010, 100, 101).
Example 2:

Input:
N = 2
Output: 3
Explanation: 
3 strings are (00,01,10).*/

class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    vector<vector<ll>> dp(n + 1, vector<ll> (2, 0));
	    const ll mod = 1e9 + 7;
	    dp[n][0] = dp[n][1] = 1;
	    
	    for(int i = n - 1; i > -1; i--){
	        dp[i][1] = dp[i + 1][0];
	        
	        dp[i][0] = (dp[i + 1][1] + dp[i + 1][0]) % mod;
	    }
	    
	    return dp[0][0];
	}
};
/*There are N points on the road, you can step ahead by 1 or 2 . If you start from a point 0, and can only move from point i to point i+1 after taking a step of length one, find the number of ways you can reach at point N. 

Example 1:

Input: 
N = 4
Output: 
5
Explanation: Three ways to reach at 4th
point. They are {1, 1, 1, 1}, {1, 1, 2},
{1, 2, 1} {2, 1, 1}, {2, 2}.

Example 2:

Input: N = 5
Output: 8
Explanation: Three ways to reach at 5th
point. They are {1, 1, 1, 1, 1},
{1, 1, 1, 2}, {1, 1, 2, 1}, {1, 2, 1, 1},
{2, 1, 1, 1}{1, 2, 2}, {2, 1, 2}, {2, 2, 1}*/

class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    long long a, b;
		    a = b = 1;
		    
		    const long long mod = 1e9 + 7;
		    
		    for(int i = 1; i < n; i++){
		        long long c = (a + b) % mod;
		        a = b;
		        b = c;
		    }
		    
		    return b;
		}
};
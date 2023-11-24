/*Given a positive integer N, return the Nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.
The elements can be large so return it modulo 109 + 7.

Example 1:

Input:
N = 4
Output: 
1 3 3 1
Explanation: 
4th row of pascal's triangle is 1 3 3 1.
Example 2:

Input:
N = 5
Output: 
1 4 6 4 1
Explanation: 
5th row of pascal's triangle is 1 4 6 4 1.
*/

class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        long long mod=1e9+7; // dividing the value with it to prevent integer overflow
        vector<vector<long long>> v1(n,vector<long long>(n,1)); //initialising all value as 1
        for(int i=2;i<n;i++)
        {
            for(int j=1;j<i;j++)
            {
                v1[i][j]=(v1[i-1][j-1]+v1[i-1][j])%mod; //key code to fill the pascal values
            }
        }
        return v1.back();
    }
};
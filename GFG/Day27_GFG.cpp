/*Given an array Arr of size N containing positive integers. Find the maximum sum of a any possible subsequence such that no two numbers in the subsequence should be adjacent in Arr.

Example 1:

Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.

Example 2:

Input:
N = 4
Arr[] = {3, 2, 7, 10}
Output: 13
Explanation: 3 and 10 forms a non
continuous subsequence with maximum
sum.
*/

//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int n0, n1;
	    n0 = n1 = 0;
	    
	    for(int i = n - 1; i > -1; i--){
	        int c0 = max(arr[i] + n1, n0);
	        int c1 = n0;
	        
	        n0 = c0;
	        n1 = c1;
	    }
	    
	    return n0;
	}
};
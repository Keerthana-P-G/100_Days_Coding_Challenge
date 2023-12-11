/*Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

NOTE: A subarray is a contiguous part of any given array.

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.

Example 2:

Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3 + Arr4 =1000,
which is maximum.
*/

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long sum = 0;
        long long result = 0;
        
        for(int i = 0; i < K; i++)
            sum += Arr[i];
            
        result = sum;
        
        for(int i = K; i < N; i++){
            sum -= Arr[i - K];
            sum += Arr[i];
            
            result= max(result, sum);
        }
        
        return result;
    }
};
/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans=1;
        int l=nums.size();
        vector<int> arr(l);
        int left=1,right=1;
        for(int i=0;i<l;i++)
        {
            arr[i]=left;
            left*=nums[i];
        }
        for(int i=l-1;i>=0;i--)
        {
            arr[i]=arr[i]*right;
            right*=nums[i];
        }
    return arr;
    }
};
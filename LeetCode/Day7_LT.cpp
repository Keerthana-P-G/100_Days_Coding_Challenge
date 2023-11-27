/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        int l=nums.size();
        if(l==1)
        return nums[0];
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<l;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
                if(count>l/2)
                {
                    res=nums[i];
                    break;
                }
            }
           
        }
         return res;
    }
};